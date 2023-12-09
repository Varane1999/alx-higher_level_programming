#!/usr/bin/python3

def complex_delete(a_dictionary, value):
    b_keys = list(a_dictionary.keys())

    for bvalue_dic in b_keys:
        if value == a_dictionary.get(bvalue_dic):
            del a_dictionary[bvalue_dic]

    return (a_dictionary)
