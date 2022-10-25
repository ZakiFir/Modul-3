print("Mengurutkan bilangan dari terkecil ke terbesar")
a = int(input("Angka 1 : "))
b = int(input("Angka 2 : "))
c = int(input("Angka 3 : "))
if (a>b and a>c and b>c) :
        print(c, b, a)
elif (a>b and a>c and b<c) :
        print(b, c, a)  
elif (b>a and b>c and a>c) :
        print(c, a, b)
elif (b>a and b>c and a<c) :
        print(a, c, b)
elif (c>a and c>b and a>b) :
        print(b, a, c)
else :
        print(a, b, c)