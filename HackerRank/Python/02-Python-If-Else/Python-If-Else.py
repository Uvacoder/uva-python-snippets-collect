#!/bin/python3

import math
import os
import random
import re
import sys


if __name__ == '__main__':
    n = int(input().strip())

if (n % 2 != 0):
    print("Weird")
elif (2 <= n <= 5):
    print("Not Weird")
elif (6 <= n <= 20):
    print("Weird")
elif (n >= 20) & (n % 2 == 0):
    print("Not Weird")