# C++ Practice

Nhóm bài C++ nền tảng trong repository. Các file được giữ nguyên; README này chỉ hỗ trợ tìm bài và ôn tập theo chủ đề.

| Bài | Chủ đề nhận diện từ mã |
|---|---|
| [CANBANG.cpp](CANBANG.cpp) | Frequency map, kiểm tra phần tử lân cận |
| [GTNL.cpp](GTNL.cpp) | Prefix maximum, tối ưu trên dãy |
| [KHOANGCACH.cpp](KHOANGCACH.cpp) | Prefix frequency, truy vấn trên xâu |
| [NGTOL.cpp](NGTOL.cpp) | Sàng nguyên tố, kiểm tra chữ số |
| [TONGK.cpp](TONGK.cpp) | Frequency map, bài toán cặp tổng |
| [TONGNHOHONK.cpp](TONGNHOHONK.cpp) | Frequency map |

## Chạy nhanh

```powershell
g++ -std=gnu++17 -O2 .\CANBANG.cpp -o .\CANBANG.exe
.\CANBANG.exe
```

Thay `CANBANG.cpp` bằng tên file cần chạy. Các chương trình trong thư mục này đọc từ stdin và xuất ra stdout theo mã nguồn hiện có.

## Gợi ý ôn tập

- So sánh cách dùng `map` trong `TONGK.cpp` và `CANBANG.cpp`.
- Đối chiếu prefix count trong `KHOANGCACH.cpp` với prefix maximum trong `GTNL.cpp`.
- Dùng `NGTOL.cpp` để ôn sàng nguyên tố và xử lý chữ số.

Danh mục đầy đủ: [INDEX.md — C++](../INDEX.md#cpp).
