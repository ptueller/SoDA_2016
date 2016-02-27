'''
Created on Feb 27, 2016

@author: Max Ruiz
'''

""" testcase
5
2
7
4
3
8
"""
import math

n = input().strip()
vals = []
sepVals = []
for i in range(int(n)):
    vals.append(int(input().strip()))
    sepVals.append([vals[i]])

for i in sepVals:
    for j in vals:
        if i[-1] < j:
            i.append(j)

max = 0
for i in sepVals:
    if len(i) > max:
        max = len(i)

print(max)
