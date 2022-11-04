a,tanda = input().split()
a=int(a)

i = 0

while (i<50):
    i += 1
    if i%a==0:
        print(tanda,end=' ')
        continue
    print(i,end=' ')