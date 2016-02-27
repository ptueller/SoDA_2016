'''
Created on Feb 27, 2016

@author: Max Ruiz
'''


def fillCipher(i,j, odd):
    for m in range(k):
        try:
            if odd > 0:
                cipher[i-m][j-m] = 1
            else:
                cipher[i-m][j-m] = 0
        except:
            pass

nAndK = input().strip().split()
n = int(nAndK[0])
k = int(nAndK[1])
code = input().strip()
c = len(code)

cipher = []

for i in range(k):
    cipher.append([])
    for j in range(c):
        cipher[i].append(0)

odd = 0


for i in range(c):
    for j in range(k):
        try:
            odd = odd + cipher[c-1-i][j] + int(code[i])
        except:
            pass
    fillCipher(c-1-i, k-1, odd)




print(cypher)
