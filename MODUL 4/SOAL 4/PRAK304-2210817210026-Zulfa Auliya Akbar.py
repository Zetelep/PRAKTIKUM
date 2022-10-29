a = int(input())

if a>=0:
    if a<100:
        if a==0:
            print("Nol")
        elif a>0:
            if a<10:
                print("Satuan")
            elif a<20:
                if a>=10:
                    print("Belasan")
            elif a>=20:
                print("Puluhan")
    else:
        print("Anda Menginput Melebihi Limit Bilangan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")
        