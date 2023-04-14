# Turbo Sort Problem Code: TSORT

 
# Given the list of numbers, you are to sort them in non decreasing order.
# Input
# t – the number of numbers in list, then t lines follow [t <= 10^6].
# Each line contains one integer: N [0 <= N <= 10^6]


t= int(input())
list=[]
for i in range(0,t):
    value = int(input())
    list.append(value)
    # print(list)
    
list.sort()
for i in range(0,t):
    print(list[i],end="\n")
