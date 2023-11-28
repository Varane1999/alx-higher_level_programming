#!/usr/bin/python3

def magic_calculation(ba, bb, bc):
    """Match bytecode provided."""
    if ba < bb:
        return (bc)
    if bc > bb:
        return (ba + bb)
    return (ba*bb - bc)
