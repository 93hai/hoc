n = int(input())

dem = 0
V = False
N = False
C = False
Đ = False
X = False
T = False

for i in range(n):
    s = str(input())
    if(s == 'V'):
        dem+=2
        V = True
    elif(s == 'N'):
        dem+=3
        N = True
    elif(s == 'C'):
        dem+=1
        C = True
    elif(s == 'Đ'):
        dem+=3
        Đ = True
    elif(s == 'X'):
        dem+=2
        X = True
    elif(s == 'T'):
        dem+=2
        T = True
print(dem)
if(V == True & N = True & C = True & Đ == True & X == True & T == True):
    print("OK")
for i in range(6):
    if(s == 'V'):
            dem+=2
            V = True
    elif(N == False):
        print("N")
    elif(C == False):
        print("C")
    elif(Đ == False):
        print("Đ")
    elif(X == False):
        print("X")
    elif(T == False):
        print("T")