a,b = map(int,input().split())


if a<b:
    i = a
    while(i<=b):
        print(a,end=' ')
        print(b,end= ' ')
        if i<b:
            print('-',end= ' ') 
        a+=1
        b-=1

elif a>b:
    i = b
    while (i<=a):
        print(a,end=' ')
        print(b,end= ' ')
        if i<a:
            print('-',end= ' ') 
        a-=1
        b+=1
