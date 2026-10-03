#link bai: https://lqdoj.edu.vn/problem/25tt9trasua
soluong = int(input())
soluonggiamgia = int(input())
giagoc = int(input())
giagiam = int(input())

if(soluong > soluonggiamgia):
    ketqua = soluong * giagiam
else:
    ketqua = soluong * giagoc

print(ketqua)