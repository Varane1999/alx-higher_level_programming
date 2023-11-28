#!/usr/bin/python3

def remove_char_at(bstr, bn):
    if bn < 0:
        return (bstr)
    return (bstr[:bn] + bstr[bn+1:])
