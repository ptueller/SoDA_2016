'''
Created on Feb 27, 2016

@author: Max Ruiz
'''

import math


n = int(input().strip())
a = []
for a_i in range(n):
   a_t = [int(a_temp) for a_temp in input().strip().split(' ')]
   a.append(a_t)

aRaiseB = []
base = []
multiple = []

for i in range(n):
    aRaiseB.append(int(math.pow(a[i][0], a[i][1])))
    base.append(a[i][2])


for i in range(n):
    j = 0
    while(aRaiseB[i] > base[i]*j):
        j = j + 1
    j = j - 1
    if (abs(aRaiseB[i] - base[i]*j) == abs(aRaiseB[i] - base[i]*(j+1))):
        multiple.append(base[i]*j)
    elif (abs(aRaiseB[i] - base[i]*j) < abs(aRaiseB[i] - base[i]*(j+1))):
        multiple.append(base[i]*j)
    else:
        multiple.append(base[i]*(j+1))



print("\n\naRaiseB\n", aRaiseB)
print("base\n", base)
print("multiple\n", multiple)
