<div align="center">

# 🚀 HÀNH TRÌNH LẬP TRÌNH CỦA HẢI

### C++ · Python · Cấu trúc dữ liệu & Giải thuật · Luyện thi Học sinh Giỏi (HSG)

[![C++](https://img.shields.io/badge/C%2B%2B-55_Files-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](hoc_C%2B%2B/README.md)
[![Python](https://img.shields.io/badge/Python-2_Files-3776AB?style=for-the-badge&logo=python&logoColor=white)](hoc_python/README.md)
[![Total Sources](https://img.shields.io/badge/Sources-57_Files-2ea44f?style=for-the-badge)](INDEX.md)
[![Contests](https://img.shields.io/badge/Exams-4_De_Thi-orange?style=for-the-badge)](INDEX.md#4-danh-sách-tài-liệu--đề-thi-đi-kèm)
[![GitHub](https://img.shields.io/badge/GitHub-93hai%2Fhoc-181717?style=for-the-badge&logo=github)](https://github.com/93hai/hoc)

</div>

---

<a id="gioi-thieu"></a>
## 📖 Giới thiệu

Chào mừng bạn đến với **`hoc`** — kho lưu trữ mã nguồn và hành trình học tập, rèn luyện môn Tin học của Hải. Repository tập hợp có hệ thống các bài luyện tập C++, Python, các chuyên đề thuật toán từ cơ bản đến nâng cao và các đợt làm bài tập / đề thi Học sinh Giỏi (HSG) lớp 9 theo ngày.

### Mục tiêu của kho lưu trữ:
- ⚡ **Tra cứu tức thì**: Tìm kiếm nhanh mã nguồn theo ngôn ngữ, thư mục và chuyên đề thuật toán.
- 🎯 **Ôn tập thực chiến**: Phân loại theo mảng kiến thức (Mảng cộng dồn, Hai con trỏ, Sàng nguyên tố, Quy hoạch động, Tham lam...) thay vì chỉ lưu theo mốc thời gian nộp bài.
- 🔍 **Trung thực & Chính xác**: Toàn bộ danh mục và tài liệu mô tả chính xác 100% theo các tệp đang có trong ổ đĩa/mã nguồn gốc.
- 🛠️ **Chuẩn hóa thao tác**: Cung cấp hướng dẫn biên dịch, chạy tệp stdin/stdout hoặc file input/output (`freopen`) nhất quán.

---

<a id="thong-tin-nhanh"></a>
## ⚡ Thông tin nhanh

| Tiêu chí | Dữ liệu thống kê thực tế | Ghi chú |
|---|:---:|---|
| **Tổng số mã nguồn** | **57 file** | 55 file C++ (`.cpp`), 2 file Python (`.py`) |
| **C++ Nền tảng (`hoc_C++`)** | **16 file** | Luyện tập giải thuật, bài tập LQDOJ |
| **Python Cơ bản (`hoc_python`)** | **2 file** | Nền tảng cấu trúc dữ liệu, hàm và chuỗi |
| **Bài nộp HSG (`Bài_GV_Tin/Nộp`)** | **39 file** | Chia thành 7 đợt bài nộp theo ngày + 1 thư mục bài mẫu (`Suggest`) |
| **Tài liệu & Đề thi đính kèm** | **4 tài liệu** | 2 file `.docx`, 1 file `.doc`, 1 file `.pdf` |
| **Tệp nhị phân / Mẫu kết quả** | **24 `.exe` · 3 `.OUT`** | Giữ nguyên trạng theo repository gốc |

---

<a id="muc-luc"></a>
## 📑 Mục lục

- [Giới thiệu](#gioi-thieu)
- [Thông tin nhanh](#thong-tin-nhanh)
- [Kiến thức & Thuật toán nổi bật](#kien-thuc-noi-bat)
- [Bảng phân phối bài tập](#danh-muc-bai-tap)
- [Cấu trúc thư mục (Repository Tree)](#cau-truc-repository)
- [Hướng dẫn biên dịch và chạy](#bien-dich-va-chay)
- [Ghi chú học tập](#ghi-chu-hoc-tap)
- [Tài liệu liên quan](#tai-lieu-lien-quan)

---

<a id="kien-thuc-noi-bat"></a>
## 💡 Kiến thức & Thuật toán nổi bật

Dưới đây là các chuyên đề thuật toán được áp dụng xuyên suốt các bài giải trong kho mã nguồn:

| Nhóm kỹ thuật | Giải pháp thuật toán | Bài tiêu biểu trong repo |
|---|---|---|
| **Mảng cộng dồn & Tần suất** | Prefix Sum, Prefix Frequency (mảng 2 chiều 26 chữ cái) | [DAISO.cpp](<hoc_C++/DAISO.cpp>), [GTNL.cpp](<hoc_C++/GTNL.cpp>), [KHOANGCACH.cpp](<Bài_GV_Tin/Nộp/day23month9isad/KHOANGCACH.cpp>) |
| **Bảng băm & Frequency Map** | `std::map` đếm phần tử đối xứng, đếm cặp tổng bằng $K$ | [TONGK.cpp](<hoc_C++/TONGK.cpp>), [CANBANG.cpp](<hoc_C++/CANBANG.cpp>), [BAI03.cpp](<Bài_GV_Tin/Nộp/day25month8/BAI03.cpp>) |
| **Hai con trỏ & Cửa sổ trượt** | Two Pointers, Sliding Window tìm đoạn tổng $\ge S$, đếm cặp $> K$ | [XOADOAN.cpp](<Bài_GV_Tin/Nộp/day23month9isad/XOADOAN.cpp>), [TONGLONHONK.cpp](<hoc_C++/TONGLONHONK.cpp>), [PAL1.cpp](<Bài_GV_Tin/Nộp/day25month8/PAL1.cpp>) |
| **Số học & Số nguyên tố** | Sàng Eratosthenes, sàng phân đoạn, phân tích thừa số, T-prime | [T-prime.cpp](<hoc_C++/T-prime.cpp>), [NGTOL.cpp](<hoc_C++/NGTOL.cpp>), [MASO.cpp](<Bài_GV_Tin/Nộp/day28month8/Suggest/MASO.cpp>) |
| **Ước số & Số đặc biệt** | Tính tổng ước, đếm ước, nhận diện số phong phú, số may mắn | [SPP.cpp](<Bài_GV_Tin/Nộp/day13month9/SPP.cpp>), [TONGUOC.cpp](<Bài_GV_Tin/Nộp/day13month9/TONGUOC.cpp>), [POWER3.cpp](<hoc_C++/POWER3.cpp>) |
| **Xử lý Xâu ký tự** | Chuẩn hóa từ, dấu câu, nén ký tự, nhận diện xâu đối xứng | [CHUANHOA.cpp](<Bài_GV_Tin/Nộp/day28month8/Suggest/CHUANHOA.cpp>), [CHUANHOA1.cpp](<Bài_GV_Tin/Nộp/day25month8/CHUANHOA1.cpp>), [XAUGON.cpp](<Bài_GV_Tin/Nộp/day25month8/XAUGON.cpp>) |
| **Xử lý Số lớn (BigInt string)** | So sánh chuỗi số, trích xuất số lớn nhất từ văn bản | [MATMA.cpp](<Bài_GV_Tin/Nộp/day26month8/MATMA.cpp>), [TIMKHOA.cpp](<Bài_GV_Tin/Nộp/day26month8/TIMKHOA.cpp>), [BIA.cpp](<Bài_GV_Tin/Nộp/day28month8/BIA.cpp>) |
| **Quy hoạch động (DP)** | Balo con (Subset Sum chia nhóm), Tháp hộp 3 chiều | [GIFT.cpp](<Bài_GV_Tin/Nộp/day22month8/GIFT.cpp>), [TOWER.cpp](<Bài_GV_Tin/Nộp/day28month9/TOWER.cpp>) |
| **Chặt nhị phân & Tham lam** | Binary Search on Answer, Greedy sắp xếp tối ưu chi phí | [BANSUNG.cpp](<Bài_GV_Tin/Nộp/day23month9isad/BANSUNG.cpp>), [VISIT.cpp](<Bài_GV_Tin/Nộp/day28month9/VISIT.cpp>), [PHILAO.cpp](<Bài_GV_Tin/Nộp/day28month8/PHILAO.cpp>) |
| **Toán rời rạc & Hình học lưới** | Khoảng cách Manhattan / đường chéo di chuyển Robot, GCD | [ROBOT.cpp](<Bài_GV_Tin/Nộp/day28month9/ROBOT.cpp>), [TRAMCAMBIEN.cpp](<hoc_C++/TRAMCAMBIEN.cpp>) |
| **Python Cơ bản** | Rẽ nhánh, danh sách, từ điển, thống kê tần suất ký tự | [python_day1.py](<hoc_python/python_day1.py>), [python_day2.py](<hoc_python/python_day2.py>) |

---

<a id="danh-muc-bai-tap"></a>
## 📂 Bảng phân phối bài tập theo thư mục

Danh sách đầy đủ từng bài, liên kết chi tiết và chủ đề giải thuật xem tại **[INDEX.md](INDEX.md)**.

| Khu vực lưu trữ | Số file nguồn | Đề / File đi kèm | Tài liệu hướng dẫn |
|---|:---:|---|---|
| **C++ Nền tảng** (`hoc_C++/`) | 16 C++ | 1 `.exe` | [hoc_C++/README.md](hoc_C%2B%2B/README.md) |
| **Python Cơ bản** (`hoc_python/`) | 2 Python | — | [hoc_python/README.md](hoc_python/README.md) |
| **Nộp ngày 13/09** (`day13month9/`) | 8 C++ | 1 file `.docx` chuyên đề số học | [INDEX.md#day13month9](INDEX.md#day13month9) |
| **Nộp ngày 22/08** (`day22month8/`) | 5 C++ | 5 `.exe`, 1 `.OUT` | [INDEX.md#day22month8](INDEX.md#day22month8) |
| **Nộp ngày 23/09** (`day23month9isad/`) | 5 C++ | 1 file `.pdf` đề Hà Nội, 1 `.exe` | [INDEX.md#day23month9isad](INDEX.md#day23month9isad) |
| **Nộp ngày 25/08** (`day25month8/`) | 5 C++ | 4 `.exe` | [INDEX.md#day25month8](INDEX.md#day25month8) |
| **Nộp ngày 26/08** (`day26month8/`) | 7 C++ | 7 `.exe`, 1 `.OUT` | [INDEX.md#day26month8](INDEX.md#day26month8) |
| **Nộp ngày 28/08** (`day28month8/`) | 4 C++ | 1 file `.doc` đề Hưng Yên, 5 `.exe` | [INDEX.md#day28month8](INDEX.md#day28month8) |
| ↳ **Bài gợi ý** (`Suggest/`) | 2 C++ | 1 `.exe`, 1 `.OUT` | [Suggest/README.md](<Bài_GV_Tin/Nộp/day28month8/Suggest/README.md>) |
| **Nộp ngày 28/09** (`day28month9/`) | 3 C++ | 1 file `.docx` đề HSG 9 | [INDEX.md#day28month9](INDEX.md#day28month9) |

---

<a id="cau-truc-repository"></a>
## 🌲 Cấu trúc repository

```text
hoc/
├── .gitignore
├── README.md                               <-- Tài liệu tổng quan dự án (Root README)
├── INDEX.md                                <-- Mục lục tra cứu toàn bộ 57 bài tập & đề thi
├── hoc_C++/                                <-- 16 bài tập C++ giải thuật & nền tảng
│   ├── README.md                           <-- Hướng dẫn chuyên đề C++ & liên kết LQDOJ
│   ├── BOBASODEP.cpp / BOBASODEP.exe
│   ├── CANBANG.cpp
│   ├── DAISO.cpp                           (LQDOJ numstrip)
│   ├── DIVISIBLE SEQUENCE.cpp              (LQDOJ seq11)
│   ├── DOITIEN.cpp                         (LQDOJ 20ts10dla2)
│   ├── GTNL.cpp
│   ├── KHOANGCACH.cpp
│   ├── NGTOL.cpp
│   ├── POWER3.cpp                          (LQDOJ ts10ct15b)
│   ├── T-prime.cpp
│   ├── THODIXEMPHIM.cpp                    (LQDOJ son001)
│   ├── TONGK.cpp
│   ├── TONGLONHONK.cpp                     (LQDOJ cppb2p125)
│   ├── TONGNHOHONK.cpp
│   ├── TRAMCAMBIEN.cpp                     (LQDOJ 26hsg9hcm1)
│   └── XOASO.cpp                           (LQDOJ lqoj09)
├── hoc_python/                             <-- 2 bài tập luyện tập Python cơ bản
│   ├── README.md
│   ├── python_day1.py                      (Điều kiện, vòng lặp, danh sách)
│   └── python_day2.py                      (Dictionary, hàm, xử lý chuỗi)
└── Bài_GV_Tin/
    └── Nộp/                                <-- 39 bài C++ luyện thi HSG theo ngày
        ├── README.md                       <-- Cổng điều hướng kho bài nộp
        ├── day13month9/                    <-- 8 bài C++ số học & ước số
        │   ├── BAI2.cpp, MASO.cpp, MAYMAN.cpp, NGUYENTO.cpp,
        │   ├── NTLECH.cpp, SPP.cpp, TONGUOC.cpp, VITRI.cpp
        │   └── BÀI TẬP VỀ Phân tích thừa số nguyên tố...docx
        ├── day22month8/                    <-- 5 bài C++ quy hoạch động & số học
        │   ├── BHK.cpp, GIFT.cpp, HUMBERGER.cpp, MISTAKE.cpp, SOHOC.cpp
        │   ├── [5 file .exe] và SOHOC.OUT
        ├── day23month9isad/                <-- 5 bài C++ chuyên đề đề thi Hà Nội
        │   ├── BANSUNG.cpp, CANBANG.cpp, CHOXUAN.cpp, KHOANGCACH.cpp, XOADOAN.cpp
        │   ├── BANSUNG.exe
        │   └── HÀ NỘI.pdf
        ├── day25month8/                    <-- 5 bài C++ xử lý xâu & đối xứng
        │   ├── BAI03.cpp, CHUANHOA1.cpp, PAL1.cpp, XAUDX.cpp, XAUGON.cpp
        │   └── [4 file .exe]
        ├── day26month8/                    <-- 7 bài C++ số lớn & mật mã xâu
        │   ├── DEMNT.cpp, DEMTU.cpp, MATMA.cpp, NGUYENAM.cpp,
        │   ├── PASSWORD.cpp, TIMKHOA.cpp, XOATT.cpp
        │   ├── [7 file .exe] và DEMTU.OUT
        ├── day28month8/                    <-- 4 bài C++ đề thi HSG Hưng Yên
        │   ├── BIA.cpp, DEMCP.cpp, PHILAO.cpp, VUON.cpp
        │   ├── MASO.exe, [4 file .exe khác]
        │   ├── De_Thi_HSG_Tin_Hoc_Hung_Yen.doc
        │   └── Suggest/                    <-- 2 bài giải mẫu chuẩn hóa & sàng phân đoạn
        │       ├── README.md
        │       ├── CHUANHOA.cpp / CHUANHOA.exe / CHUANHOA.OUT
        │       └── MASO.cpp
        └── day28month9/                    <-- 3 bài C++ đề thi HSG lớp 9 mới
            ├── ROBOT.cpp
            ├── TOWER.cpp
            ├── VISIT.cpp
            └── DE HSG 9.docx
```

---

<a id="bien-dich-va-chay"></a>
## ⚙️ Hướng dẫn biên dịch và chạy

### 1. Với mã nguồn C++ (`.cpp`)

Yêu cầu trình biên dịch GCC (`g++`) hỗ trợ chuẩn C++14/C++17:

```powershell
# Ví dụ: Biên dịch file thuật toán trong hoc_C++
g++ -std=c++17 -O2 .\hoc_C++\DAISO.cpp -o .\hoc_C++\DAISO.exe
.\hoc_C++\DAISO.exe
```

> **📌 Lưu ý về File I/O (`freopen`)**:
> - Hầu hết các bài trong thư mục `Bài_GV_Tin\Nộp\` sử dụng `freopen` đọc file `.INP` và ghi file `.OUT` (ví dụ: `CANBANG.INP`, `ROBOT.INP`, `TOWER.INP`...).
> - Khi thực thi, bạn cần tạo file input `.INP` tương ứng trong cùng thư mục chạy chương trình hoặc mở terminal tại đúng thư mục chứa file.

### 2. Với mã nguồn Python (`.py`)

Chạy bằng Python 3:

```powershell
python .\hoc_python\python_day1.py
python .\hoc_python\python_day2.py
```

Dữ liệu kiểm thử được nhập trực tiếp qua dòng lệnh (`stdin`).

---

<a id="ghi-chu-hoc-tap"></a>
## 📌 Ghi chú học tập

1. **Tra cứu theo chủ đề trước**: Sử dụng [INDEX.md](INDEX.md) để tìm bài theo phương pháp giải thuật thay vì duyệt tuần tự từng ngày.
2. **Kỹ thuật xâu và số lớn**: Nhiều bài toán HSG yêu cầu xử lý chuỗi chữ số lên đến hàng trăm chữ số (như `MATMA.cpp`, `TIMKHOA.cpp`, `BIA.cpp`), hãy ưu tiên so sánh theo độ dài trước, sau đó so sánh từng ký tự.
3. **Mảng cộng dồn tần suất**: Kỹ thuật mở rộng mảng cộng dồn cho 26 chữ cái tiếng Anh (`long long a[26][N]`) trong `KHOANGCACH.cpp` là phương pháp kinh điển giải các bài toán truy vấn đoạn $[L, R]$ trong thời gian $O(1)$.
4. **Hai con trỏ (Two Pointers)**: Ứng dụng xuất sắc trong `XOADOAN.cpp` (tìm đoạn ngắn nhất tổng $\ge S$) và `TONGLONHONK.cpp` (đếm cặp tổng lớn hơn $K$ sau khi sắp xếp).

---

<a id="tai-lieu-lien-quan"></a>
## 🔗 Tài liệu liên kết nhanh

- 📑 [**INDEX.md**](INDEX.md) — Toàn bộ danh mục 57 bài tập và 4 tài liệu đề thi.
- 📘 [**README C++**](hoc_C%2B%2B/README.md) — Chuyên mục 16 bài C++ nền tảng và bài tập LQDOJ.
- 🐍 [**README Python**](hoc_python/README.md) — Chuyên mục 2 bài Python cơ bản.
- 📂 [**README Bài Nộp Tin Học**](<Bài_GV_Tin/Nộp/README.md>) — Cổng điều hướng 7 đợt bài nộp HSG.
- 💡 [**README Bài Gợi Ý (Suggest)**](<Bài_GV_Tin/Nộp/day28month8/Suggest/README.md>) — 2 bài giải mẫu chuẩn hóa & sàng phân đoạn.
- 🌐 [**GitHub Repository**](https://github.com/93hai/hoc) — Kho mã nguồn trực tuyến.

---

<div align="center">

**Học có hệ thống · Ôn có trọng tâm · Mã nguồn chuẩn xác**

</div>
