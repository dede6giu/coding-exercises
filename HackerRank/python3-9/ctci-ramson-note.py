#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'checkMagazine' function below.
#
# The function accepts following parameters:
#  1. STRING_ARRAY magazine
#  2. STRING_ARRAY note
#

def checkMagazine(magazine, note):
    hash_table = {}
    
    for word in magazine:
        if hash_table.get(word) == None:
            hash_table.setdefault(word, 1)
        else:
            hash_table[word] += 1
    
    for word in note:
        if hash_table.get(word) == None:
            return 'No'
        else:
            hash_table[word] -= 1
    
    for i in hash_table.values():
        if i < 0:
            return 'No'
    
    return 'Yes'


if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    m = int(first_multiple_input[0])

    n = int(first_multiple_input[1])

    magazine = input().rstrip().split()

    note = input().rstrip().split()

    print(checkMagazine(magazine, note))