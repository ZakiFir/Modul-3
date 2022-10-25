a = int(input("Masukkan Nilai : "))
if(a >= 100) :
     print("Anda Menginput Melebihi Limit Bilangan")
elif(a > 1 and a < 10) :
    print("Satuan")
elif (a > 9 and a < 20) :
    print("Belasan")
elif(a >= 20 and a < 100) :
    print("Puluhan")
else :
    print("Nol")