#link bai: https://lqdoj.edu.vn/problem/25tt9trasua

import sys

sys.stdin = open("TRASUA.INP", "r")
sys.stdout = open("TRASUA.OUT", "w")

soluong, soluonggiamgia, giagoc, giagiam = map(int, input().split())

if(soluong > soluonggiamgia):
    ketqua = soluong * giagiam
else:
    ketqua = soluong * giagoc

print(ketqua)