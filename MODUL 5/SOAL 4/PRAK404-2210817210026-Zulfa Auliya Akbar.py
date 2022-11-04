pil = 0
while (pil !=5):
    print("Pilih program \n1.Penjumlahan \n2.Pengurangan \n3.perkalian \n4.Pembagian\n5.Exit \nMasukan Pilihan :" )
    pil = int(input())

    if pil!=1 and pil!=2 and pil!=3 and pil!=4 and pil!=5:
        print("Input anda salah, silahkan coba lagi \n")
    
    elif pil == 5:
        print("Terimakasih, telah menggunakan kalkulator Zulfa Auliya Akbar \n")
    
    else:
        n1=float(input("Masukan nilai pertama :"))
        n2=float(input("Masukan nilai kedua :"))

        if pil==1:
            print("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f \n" %(n1,n2,n1+n2))
        if pil==2:
            print("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f \n" %(n1,n2,n1-n2))
        if pil==3:
            print("Hasil perkalian antara %.2f dengan %.2f adalah %.2f \n" %(n1,n2,n1*n2))
        if pil==4:
            print("Hasil pembagian antara %.2f dengan %.2f adalah %.2f \n" %(n1,n2,n1/n2))
