print("BAI 1 AM,DUONG,ZERO")
print("BAI 2 TINH TONG")
print("BAI 3 SO LON NHAT")

print ("BAI: ") 
x = int(input())

if(x == 1):
    n = int(input())
    if n > 0:
        print("DUONG")
    elif n == 0:
        print("ZERO")
    else:
        print("AM")
if(x == 2):
    n = int(input())
    sum = 0
    for i in range(n):
        sum += i
    print(sum)
if(x == 3):
    a = [7, 2, 9, 4, 15, 3]
    lon_nhat = -2e18
    for i in range(len(a)):
        lon_nhat = max(a[i], lon_nhat)
    print(lon_nhat)
