#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
  #n = s.split(" ")
   n = s.split(" ")
   words = [w.capitalize() for w in n]
   ret=" ".join(words)
   return ret
'''
    for i in n:
    names = i.capitalize()
  editname=" ".join(names)
  return editname
'''
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
'''
output
Input (stdin)

Download
hello world
Your Output (stdout)
Hello World
Expected Output

Download
Hello World
'''