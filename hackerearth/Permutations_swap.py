t=int(input())

for i in range(t):
    n= int(input())
    a=input().split()
    a=[int(x) for x in a]
    s=sum(a)
    k=0
    f=0
    ss=0
    for i in range(1,n+1):
        k+=i
        ss+=a[i-1]
        if k>ss:
            f=1
    if (s==k and f==0):
        print("YES")
    else:
        print("NO")    