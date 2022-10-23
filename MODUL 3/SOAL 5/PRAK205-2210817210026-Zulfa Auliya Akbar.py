import math

A,B = map(float,input().split())

print("Alas =",round(math.sqrt((B*B)-(A*A))),"cm" )
print("tinggi =",round(A),"cm")
print("Keliling =",round(A+B+math.sqrt((B*B)-(A*A))),"cm")
print("Luas =",round(0.5*A*(math.sqrt((B*B)-(A*A)))),"cm^2")
