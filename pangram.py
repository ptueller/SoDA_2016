'''
Created on Feb 27, 2016

@author: Max Ruiz
'''


message = input().strip()
output = ["pangram", "not pangram"]

message = message.replace(' ','')

message = message.lower()

alpha = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
check = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]



for i in range(len(alpha)):
    if (message.count(alpha[i]) > 0):
        check[i] = 1


sum = 0
for i in check:
    sum = sum + i

if (sum != 26):
    print(output[1])
else:
    print(output[0])






