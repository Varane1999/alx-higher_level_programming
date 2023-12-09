#include <stdio.h>
#include <Python.h>
#include <time.h>
#include <object.h>
#include <listobject.h>

/**
 * print_python_bytes - Prints bytes info
 * @p: Python Objects
 * Return: no return or void return
 */
void print_python_bytes(PyObject *p)
{
	char *bstr;
	long int size, b, flim;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	size = ((PyVarObject *)(p))->ob_size;
	bstr = ((PyBytesObject *)p)->ob_sval;

	printf("  size: %ld\n", size);
	printf("  trying string: %s\n", bstr);

	if (size >= 10)
		flim = 10;
	else
		flim = size + 1;

	printf("  first %ld bytes:", flim);

	for (b = 0; b < flim; b++)
		if (bstr[b] >= 0)
			printf(" %02x", bstr[b]);
		else
			printf(" %02x", 256 + bstr[b]);

	printf("\n");
}

/**
 * print_python_list - Prints list info
 * @p: Python Objects
 * Return: no return or void
 */
void print_python_list(PyObject *p)
{
	long int size, b;
	PyListObject *blist;
	PyObject *bobj;

	size = ((PyVarObject *)(p))->ob_size;
	blist = (PyListObject *)p;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", blist->allocated);

	for (b = 0; b < size; b++)
	{
		bobj = ((PyListObject *)p)->ob_item[b];
		printf("Element %ld: %s\n", b, ((bobj)->ob_type)->tp_name);
		if (PyBytes_Check(bobj))
			print_python_bytes(bobj);
	}
}
