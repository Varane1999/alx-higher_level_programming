#!/usr/bin/python3

def best_score(a_dictionary):
    """
    A function that returns a key with the biggest value.
    """
    if a_dictionary:
        b_list = list(a_dictionary.keys())
        bscore = 0
        bleader = ""
        for b in b_list:
            if a_dictionary[b] > bscore:
                bscore = a_dictionary[b]
                bleader = b
        return bleader
