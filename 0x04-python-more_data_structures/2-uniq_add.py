#!/usr/bin/python3

def uniq_add(my_list=[]):
    """
    A function that adds all unique together
    integers in a list once for each integer
    """
    b_list = []
    bsum = 0
    for b in my_list:
        if b not in b_list:
            bsum += b
            b_list.append(b)
    return bsum
