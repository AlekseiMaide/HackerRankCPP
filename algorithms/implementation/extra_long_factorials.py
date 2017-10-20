#!/bin/python3


import sys


n = int(input().strip())
sum = 1

for num in range(1, n + 1):
    sum = sum * num

print(sum)