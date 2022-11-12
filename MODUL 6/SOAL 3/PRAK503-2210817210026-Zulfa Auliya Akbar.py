def maksimal (a,b):
    return max(a,b)
def minimal (a,b):
    return min(a,b)


batas = 0
maks = -100000
minim = 100000
bilangan = int(input())
while(batas<bilangan):
    nilai = map(int,input().split())
    for i in nilai :
        maks   = maksimal(maks, i)
        minim = minimal(minim, i)
        batas+=1
print(maks,minim)