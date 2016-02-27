'''
Created on Feb 27, 2016

@author: Max Ruiz
'''


message = input().strip()
message = message.replace(' ','')
message = message.lower()

m = len(message)

multLetter = ['']
j = 0
for i in range(m):
    if i < m-1:
        if multLetter[j] == '':
            multLetter[j] = message[i]
        if message[i] == message[i+1]:
            multLetter[j] = multLetter[j] + message[i+1]
        else:
            j = j + 1
            multLetter.append('')

countLetter = []
for i in multLetter:
    countLetter.append(len(i))

dif = 0
cnt = 0
for i in range(len(countLetter)):
    if i < len(countLetter)-1:
        dif = dif + abs(countLetter[i] - countLetter[i+1])

if dif > 1:
    print("NO")
else:
    print("YES")
