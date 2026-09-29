# C++ Practice — Luyện tập C++ Nền tảng

Thư mục chứa các bài toán lập trình C++ rèn luyện kỹ năng giải thuật, cấu trúc dữ liệu và xử lý bài toán chuyên đề. Các mã nguồn được lưu trữ trực tiếp, phục vụ tra cứu và ôn tập.

---

## Danh mục 16 bài tập C++

| STT | Bài toán | Kỹ thuật / Thuật toán | Liên kết nguồn / Đề |
|:---:|---|---|:---:|
| 1 | `BOBASODEP.cpp` | Phân loại chia hết cho 5, nhân lũy thừa tổ hợp | [BOBASODEP.cpp](BOBASODEP.cpp) |
| 2 | `CANBANG.cpp` | Map tần suất (Frequency map), tra cứu phần tử đối xứng | [CANBANG.cpp](CANBANG.cpp) |
| 3 | `DAISO.cpp` | Mảng cộng dồn (Prefix Sum), tìm điểm cân bằng hai phía | [DAISO.cpp](DAISO.cpp) · [LQDOJ numstrip](https://lqdoj.edu.vn/problem/numstrip) |
| 4 | `DIVISIBLE SEQUENCE.cpp` | Mảng cộng dồn (Prefix Sum), đồng dư chia hết | [DIVISIBLE SEQUENCE.cpp](DIVISIBLE%20SEQUENCE.cpp) · [LQDOJ seq11](https://lqdoj.edu.vn/problem/seq11) |
| 5 | `DOITIEN.cpp` | Thuật toán tham lam (Greedy) đổi tiền mệnh giá 5, 2, 1 | [DOITIEN.cpp](DOITIEN.cpp) · [LQDOJ 20ts10dla2](https://lqdoj.edu.vn/problem/20ts10dla2) |
| 6 | `GTNL.cpp` | Tiền xử lý mảng (Prefix Maximum), tối ưu đoạn | [GTNL.cpp](GTNL.cpp) |
| 7 | `KHOANGCACH.cpp` | Mảng cộng dồn 2 chiều (Prefix Frequency 26 chữ cái) | [KHOANGCACH.cpp](KHOANGCACH.cpp) |
| 8 | `NGTOL.cpp` | Sàng số nguyên tố Eratosthenes, tách chữ số | [NGTOL.cpp](NGTOL.cpp) |
| 9 | `POWER3.cpp` | Phân tích thừa số nguyên tố, kiểm tra số mũ bậc 3 | [POWER3.cpp](POWER3.cpp) · [LQDOJ ts10ct15b](https://lqdoj.edu.vn/problem/ts10ct15b) |
| 10 | `T-prime.cpp` | Sàng Eratosthenes, nhận diện số T-prime ($p^2$) | [T-prime.cpp](T-prime.cpp) |
| 11 | `THODIXEMPHIM.cpp` | Đếm bước nhảy nghịch thế, duyệt tuyến tính $O(N)$ | [THODIXEMPHIM.cpp](THODIXEMPHIM.cpp) · [LQDOJ son001](https://lqdoj.edu.vn/problem/son001) |
| 12 | `TONGK.cpp` | `std::map` tần suất, đếm số cặp có tổng bằng $K$ | [TONGK.cpp](TONGK.cpp) |
| 13 | `TONGLONHONK.cpp` | Sắp xếp + Hai con trỏ (Two Pointers) đếm cặp tổng $> K$ | [TONGLONHONK.cpp](TONGLONHONK.cpp) · [LQDOJ cppb2p125](https://lqdoj.edu.vn/problem/cppb2p125) |
| 14 | `TONGNHOHONK.cpp` | Đếm cặp phần tử có tổng nhỏ hơn $K$ | [TONGNHOHONK.cpp](TONGNHOHONK.cpp) |
| 15 | `TRAMCAMBIEN.cpp` | Ước chung lớn nhất (GCD / `__gcd`), tối giản tọa độ | [TRAMCAMBIEN.cpp](TRAMCAMBIEN.cpp) · [LQDOJ 26hsg9hcm1](https://lqdoj.edu.vn/problem/26hsg9hcm1) |
| 16 | `XOASO.cpp` | Xử lý xâu ký tự (String slicing), loại bỏ 3 chữ số cuối | [XOASO.cpp](XOASO.cpp) · [LQDOJ lqoj09](https://lqdoj.edu.vn/problem/lqoj09) |

---

## Biên dịch và Chạy

Yêu cầu trình biên dịch C++ hỗ trợ C++14/C++17 (như GCC `g++` hoặc Clang):

```powershell
# Biên dịch file bất kỳ (ví dụ DAISO.cpp)
g++ -std=c++17 -O2 .\DAISO.cpp -o .\DAISO.exe

# Chạy chương trình
.\DAISO.exe
```

> **Lưu ý**: Các bài trong thư mục `hoc_C++` chủ yếu nhập từ bàn phím (`cin`) và xuất ra màn hình (`cout`) với tối ưu luồng `ios_base::sync_with_stdio(false); cin.tie(nullptr);`.

---

## Nhóm chuyên đề ôn tập

- **Mảng cộng dồn & Tần suất**: `DAISO.cpp`, `DIVISIBLE SEQUENCE.cpp`, `GTNL.cpp`, `KHOANGCACH.cpp`.
- **Kỹ thuật Hai con trỏ / Map**: `CANBANG.cpp`, `TONGK.cpp`, `TONGLONHONK.cpp`, `TONGNHOHONK.cpp`.
- **Số học & Nguyên tố**: `NGTOL.cpp`, `T-prime.cpp`, `POWER3.cpp`, `TRAMCAMBIEN.cpp`.
- **Tham lam & Tư duy logic**: `DOITIEN.cpp`, `THODIXEMPHIM.cpp`, `BOBASODEP.cpp`, `XOASO.cpp`.

👉 Xem toàn bộ mục lục hệ thống tại: [INDEX.md](../INDEX.md)
