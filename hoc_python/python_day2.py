diem = {}
def dem_ky_tu(s):
    for i in range(len(s)):
        if s[i] not in diem:
            diem[s[i]] = 0
        diem[s[i]] += 1

    for i in diem:
        print(i, diem[i])

def tim_nhieu_nhat(s):
    so = -1
    vitri = 0
    for i in diem:
        if diem[i] > so:
            vitri = i
            so = diem[i]

    return vitri, so

def in_ket_qua(s):
    print("chuoi: ", s)
    print("do dai: ", len(s))
    print("dao nguoc: ", s[::-1])

    dai_nhat = -1
    chu = 0
    dem = 0
    for i in range(len(s)):
        if s[i] not in diem:
            diem[s[i]] = 0
            dem += 1
        diem[s[i]] += 1
        if dai_nhat < diem[s[i]]:
            dai_nhat = diem[s[i]]
            chu = s[i]

    print("so ki tu khac nhau: ", dem)
    print("nhieu nhat: ", chu, " ", dai_nhat)


x = input()

in_ket_qua(x)