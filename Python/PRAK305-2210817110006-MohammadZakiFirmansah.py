a = int(input("Masukkan Nilai : "))
hari = a // 86400
sisa = a % 86400
sisa2 = a % 3600
jam = sisa // 3600
menit = sisa2 //60
detik = a % 60
if(a >= 86400) :
    print(hari, "hari", jam, ":", menit, ":", detik)
elif (a >= 3600 and a <86400) :
    print(jam, ":", menit, ":", detik)
elif (a > 60 and a <3600) :
    print("00:", menit, ":", detik)
else :
    print("00", "00", detik)