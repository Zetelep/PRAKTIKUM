n,k=map(int,input().split())
nilai1 = nilai2 = total = 0

for i in range(1 ,n+1):
    j = i
    while(j>=1):
        print("(%d * %d)"%(j,k),end=' ')
        if j>1:
            print("+",end=' ')
        j-=1

    nilai1=i*k
    nilai2+=nilai1
    print("= %d"%(nilai2),end=' ')
    print(" ")
    total+=nilai2

print(total)