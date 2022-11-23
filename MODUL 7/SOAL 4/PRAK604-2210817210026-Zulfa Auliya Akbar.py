A = 0
B = 0
Kode = list(input(""))
Pesan = list(input(""))

Pkode = len(Kode)
Ppesan = len(Pesan)

if Pkode != Ppesan:
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for i in range(Pkode):
        if " " in Kode[i] and " " in Pesan[i] :
            continue       
        elif Kode[i] == Pesan[i]:
            print("*", end="")
            A += 1
        else:
            print("#", end="")
            B += 1
    print("\n* = ", A)
    print("# = ", B)
    if A >= B:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")