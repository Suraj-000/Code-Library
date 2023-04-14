# Lucky Four Problem Code: LUCKFOUR


t=int(input())
while (t>0):
    count=0
    n=input()
    for i in n:
        if i=="4":
            count+=1 
        else:
            continue
    print(count)
    t-=1
   
