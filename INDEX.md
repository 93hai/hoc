# Danh Mục Toàn Bộ Bài Tập & Mã Nguồn (INDEX)

Tài liệu này cung cấp mục lục chi tiết, đầy đủ và chính xác 100% của toàn bộ **57 file mã nguồn** (55 file C++, 2 file Python) cùng các tài liệu đề bài đi kèm hiện có trong repository.

---

## 📊 Bảng Thống Kê Nhanh

| Phân nhóm thư mục | C++ (.cpp) | Python (.py) | Đề bài / Tài liệu | File thực thi (.exe) | File xuất mẫu (.OUT) |
|---|:---:|:---:|:---:|:---:|:---:|
| **`hoc_C++/`** | 16 | 0 | 0 | 1 | 0 |
| **`hoc_python/`** | 0 | 2 | 0 | 0 | 0 |
| **`Bài_GV_Tin/Nộp/day13month9/`** | 8 | 0 | 1 (.docx) | 0 | 0 |
| **`Bài_GV_Tin/Nộp/day22month8/`** | 5 | 0 | 0 | 5 | 1 |
| **`Bài_GV_Tin/Nộp/day23month9isad/`** | 5 | 0 | 1 (.pdf) | 1 | 0 |
| **`Bài_GV_Tin/Nộp/day25month8/`** | 5 | 0 | 0 | 4 | 0 |
| **`Bài_GV_Tin/Nộp/day26month8/`** | 7 | 0 | 0 | 7 | 1 |
| **`Bài_GV_Tin/Nộp/day28month8/`** | 4 | 0 | 1 (.doc) | 5 | 0 |
| **`Bài_GV_Tin/Nộp/day28month8/Suggest/`** | 2 | 0 | 0 | 1 | 1 |
| **`Bài_GV_Tin/Nộp/day28month9/`** | 3 | 0 | 1 (.docx) | 0 | 0 |
| **TỔNG CỘNG** | **55** | **2** | **4** | **24** | **3** |

---

## 1. C++ Nền Tảng & Bài Tập Chuyên Đề (`hoc_C++/`)
> Thư mục chi tiết: [hoc_C++/README.md](hoc_C%2B%2B/README.md)

| STT | Tên file | Thuật toán / Chủ đề chính | Liên kết mã nguồn | Liên kết đề gốc |
|:---:|---|---|:---:|:---:|
| 1 | `BOBASODEP.cpp` | Tổ hợp, chia hết cho 5, nhân lũy thừa | [BOBASODEP.cpp](<hoc_C++/BOBASODEP.cpp>) | — |
| 2 | `CANBANG.cpp` | `std::map` đếm tần suất, kiểm tra lân cận $a[i] \pm k$ | [CANBANG.cpp](<hoc_C++/CANBANG.cpp>) | — |
| 3 | `DAISO.cpp` | Mảng cộng dồn (Prefix Sum), tìm điểm chia đôi dãy bằng nhau | [DAISO.cpp](<hoc_C++/DAISO.cpp>) | [LQDOJ numstrip](https://lqdoj.edu.vn/problem/numstrip) |
| 4 | `DIVISIBLE SEQUENCE.cpp` | Mảng cộng dồn, bài toán chia hết | [DIVISIBLE SEQUENCE.cpp](<hoc_C++/DIVISIBLE SEQUENCE.cpp>) | [LQDOJ seq11](https://lqdoj.edu.vn/problem/seq11) |
| 5 | `DOITIEN.cpp` | Thuật toán tham lam (Greedy) đổi tiền mệnh giá 5, 2, 1 | [DOITIEN.cpp](<hoc_C++/DOITIEN.cpp>) | [LQDOJ 20ts10dla2](https://lqdoj.edu.vn/problem/20ts10dla2) |
| 6 | `GTNL.cpp` | Tiền xử lý mảng (Prefix Maximum), tối ưu dãy | [GTNL.cpp](<hoc_C++/GTNL.cpp>) | — |
| 7 | `KHOANGCACH.cpp` | Mảng tần suất tiền xử lý 26 chữ cái (Prefix Frequency) | [KHOANGCACH.cpp](<hoc_C++/KHOANGCACH.cpp>) | — |
| 8 | `NGTOL.cpp` | Sàng số nguyên tố Eratosthenes, tách chữ số | [NGTOL.cpp](<hoc_C++/NGTOL.cpp>) | — |
| 9 | `POWER3.cpp` | Phân tích thừa số nguyên tố, kiểm tra lũy thừa mũ 3 | [POWER3.cpp](<hoc_C++/POWER3.cpp>) | [LQDOJ ts10ct15b](https://lqdoj.edu.vn/problem/ts10ct15b) |
| 10 | `T-prime.cpp` | Sàng Eratosthenes, đếm/in số T-prime ($p^2$ với $p$ nguyên tố) | [T-prime.cpp](<hoc_C++/T-prime.cpp>) | — |
| 11 | `THODIXEMPHIM.cpp` | Đếm bước nghịch thế dãy số, phân đoạn liên tiếp | [THODIXEMPHIM.cpp](<hoc_C++/THODIXEMPHIM.cpp>) | [LQDOJ son001](https://lqdoj.edu.vn/problem/son001) |
| 12 | `TONGK.cpp` | `std::map` tần suất, đếm số cặp có tổng bằng $K$ | [TONGK.cpp](<hoc_C++/TONGK.cpp>) | — |
| 13 | `TONGLONHONK.cpp` | Sắp xếp + Hai con trỏ (Two Pointers) đếm cặp tổng $> K$ | [TONGLONHONK.cpp](<hoc_C++/TONGLONHONK.cpp>) | [LQDOJ cppb2p125](https://lqdoj.edu.vn/problem/cppb2p125) |
| 14 | `TONGNHOHONK.cpp` | Đếm cặp phần tử có tổng nhỏ hơn $K$ | [TONGNHOHONK.cpp](<hoc_C++/TONGNHOHONK.cpp>) | — |
| 15 | `TRAMCAMBIEN.cpp` | Ước chung lớn nhất (GCD / `__gcd`), rút gọn tỷ lệ tọa độ | [TRAMCAMBIEN.cpp](<hoc_C++/TRAMCAMBIEN.cpp>) | [LQDOJ 26hsg9hcm1](https://lqdoj.edu.vn/problem/26hsg9hcm1) |
| 16 | `XOASO.cpp` | Xử lý xâu chuỗi, xóa 3 chữ số tận cùng | [XOASO.cpp](<hoc_C++/XOASO.cpp>) | [LQDOJ lqoj09](https://lqdoj.edu.vn/problem/lqoj09) |

---

## 2. Python Cơ Bản (`hoc_python/`)
> Thư mục chi tiết: [hoc_python/README.md](hoc_python/README.md)

| STT | Tên file | Kỹ năng & Kiến thức | Liên kết |
|:---:|---|---|:---:|
| 1 | `python_day1.py` | Cấu trúc rẽ nhánh `if/else`, vòng lặp `for`, danh sách `list`, tìm giá trị lớn nhất | [python_day1.py](<hoc_python/python_day1.py>) |
| 2 | `python_day2.py` | Từ điển `dict`, hàm `def`, thống kê tần suất ký tự, chuẩn hóa xâu | [python_day2.py](<hoc_python/python_day2.py>) |

---

## 3. Các Đợt Bài Nộp Luyện Thi HSG (`Bài_GV_Tin/Nộp/`)
> Tổng quan các đợt: [Bài_GV_Tin/Nộp/README.md](<Bài_GV_Tin/Nộp/README.md>)

<a id="day13month9"></a>
### 3.1. Đợt nộp ngày 13/09 (`day13month9/`)
*Tài liệu đính kèm:* [BÀI TẬP VỀ Phân tích thừa số nguyên tố...docx](<Bài_GV_Tin/Nộp/day13month9/BÀI TẬP VỀ Phân tích thừa số nguyên tố. Ứng dụng tìm số lượng và tổng các ước của một số..docx>)

| STT | Tên file | Thuật toán / Chủ đề chính | Liên kết |
|:---:|---|---|:---:|
| 1 | `BAI2.cpp` | Sàng nguyên tố, mảng cộng dồn đếm ước (Prefix Frequency) | [BAI2.cpp](<Bài_GV_Tin/Nộp/day13month9/BAI2.cpp>) |
| 2 | `MASO.cpp` | Phân tích một số nguyên ra thừa số nguyên tố | [MASO.cpp](<Bài_GV_Tin/Nộp/day13month9/MASO.cpp>) |
| 3 | `MAYMAN.cpp` | Toán học số học, kiểm tra điều kiện số may mắn | [MAYMAN.cpp](<Bài_GV_Tin/Nộp/day13month9/MAYMAN.cpp>) |
| 4 | `NGUYENTO.cpp` | Sàng Eratosthenes kết hợp đảo ngược chữ số (Emirp) và Prefix Count | [NGUYENTO.cpp](<Bài_GV_Tin/Nộp/day13month9/NGUYENTO.cpp>) |
| 5 | `NTLECH.cpp` | Sàng số nguyên tố, kiểm tra tính chất chênh lệch chữ số | [NTLECH.cpp](<Bài_GV_Tin/Nộp/day13month9/NTLECH.cpp>) |
| 6 | `SPP.cpp` | Tính tổng các ước số, nhận diện số phong phú (Abundant Number) | [SPP.cpp](<Bài_GV_Tin/Nộp/day13month9/SPP.cpp>) |
| 7 | `TONGUOC.cpp` | Thuật toán tính nhanh tổng ước số của một số nguyên | [TONGUOC.cpp](<Bài_GV_Tin/Nộp/day13month9/TONGUOC.cpp>) |
| 8 | `VITRI.cpp` | Công thức giải tích, quy luật chẵn lẻ xác định vị trí phần tử | [VITRI.cpp](<Bài_GV_Tin/Nộp/day13month9/VITRI.cpp>) |

<a id="day22month8"></a>
### 3.2. Đợt nộp ngày 22/08 (`day22month8/`)
*Tệp đính kèm:* 5 file `.exe`, 1 file `SOHOC.OUT`

| STT | Tên file | Thuật toán / Chủ đề chính | Liên kết |
|:---:|---|---|:---:|
| 1 | `BHK.cpp` | Tìm bội số thỏa mãn điều kiện chữ số | [BHK.cpp](<Bài_GV_Tin/Nộp/day22month8/BHK.cpp>) |
| 2 | `GIFT.cpp` | Quy hoạch động Subset Sum (phân chia quà thành 2 nhóm tối ưu) | [GIFT.cpp](<Bài_GV_Tin/Nộp/day22month8/GIFT.cpp>) |
| 3 | `HUMBERGER.cpp` | Tối ưu hóa bài toán mua nguyên liệu làm bánh Hamburger | [HUMBERGER.cpp](<Bài_GV_Tin/Nộp/day22month8/HUMBERGER.cpp>) |
| 4 | `MISTAKE.cpp` | Xử lý chuỗi số sai lệch: đổi số 5 và 6 để tính tổng lớn nhất/nhỏ nhất | [MISTAKE.cpp](<Bài_GV_Tin/Nộp/day22month8/MISTAKE.cpp>) |
| 5 | `SOHOC.cpp` | Kiểm tra kết hợp số chính phương và tính nguyên tố | [SOHOC.cpp](<Bài_GV_Tin/Nộp/day22month8/SOHOC.cpp>) |

<a id="day23month9isad"></a>
### 3.3. Đợt nộp ngày 23/09 (`day23month9isad/`)
*Tài liệu đính kèm:* [HÀ NỘI.pdf](<Bài_GV_Tin/Nộp/day23month9isad/HÀ NỘI.pdf>) *(Đề thi chuyên đề Hà Nội)*, 1 file `.exe`

| STT | Tên file | Thuật toán / Chủ đề chính | Liên kết |
|:---:|---|---|:---:|
| 1 | `BANSUNG.cpp` | Chặt nhị phân kết quả (Binary Search on Answer) mô phỏng sát thương | [BANSUNG.cpp](<Bài_GV_Tin/Nộp/day23month9isad/BANSUNG.cpp>) |
| 2 | `CANBANG.cpp` | `std::map` tần suất tìm phần tử cân bằng $a[i] \pm k$ (sử dụng `freopen`) | [CANBANG.cpp](<Bài_GV_Tin/Nộp/day23month9isad/CANBANG.cpp>) |
| 3 | `CHOXUAN.cpp` | Tính toán chu kỳ thời gian 7 ngày trong tuần | [CHOXUAN.cpp](<Bài_GV_Tin/Nộp/day23month9isad/CHOXUAN.cpp>) |
| 4 | `KHOANGCACH.cpp` | Mảng tần suất 2 chiều 26 chữ cái, tính khoảng cách vòng tròn chữ cái trên đoạn $[L, R]$ | [KHOANGCACH.cpp](<Bài_GV_Tin/Nộp/day23month9isad/KHOANGCACH.cpp>) |
| 5 | `XOADOAN.cpp` | Hai con trỏ / Cửa sổ trượt (Sliding Window) tìm đoạn ngắn nhất có tổng $\ge S$ | [XOADOAN.cpp](<Bài_GV_Tin/Nộp/day23month9isad/XOADOAN.cpp>) |

<a id="day25month8"></a>
### 3.4. Đợt nộp ngày 25/08 (`day25month8/`)
*Tệp đính kèm:* 4 file `.exe`

| STT | Tên file | Thuật toán / Chủ đề chính | Liên kết |
|:---:|---|---|:---:|
| 1 | `BAI03.cpp` | Bảng tần suất chữ cái, đếm ký tự xuất hiện | [BAI03.cpp](<Bài_GV_Tin/Nộp/day25month8/BAI03.cpp>) |
| 2 | `CHUANHOA1.cpp` | Chuẩn hóa xâu: chuyển ký tự đầu từ hoa, xóa khoảng trắng thừa | [CHUANHOA1.cpp](<Bài_GV_Tin/Nộp/day25month8/CHUANHOA1.cpp>) |
| 3 | `PAL1.cpp` | Hai con trỏ kiểm tra tính đối xứng (Palindrome) của xâu | [PAL1.cpp](<Bài_GV_Tin/Nộp/day25month8/PAL1.cpp>) |
| 4 | `XAUDX.cpp` | Kiểm tra xâu đối xứng (Two Pointers) | [XAUDX.cpp](<Bài_GV_Tin/Nộp/day25month8/XAUDX.cpp>) |
| 5 | `XAUGON.cpp` | Nén ký tự lặp liên tiếp trong xâu | [XAUGON.cpp](<Bài_GV_Tin/Nộp/day25month8/XAUGON.cpp>) |

<a id="day26month8"></a>
### 3.5. Đợt nộp ngày 26/08 (`day26month8/`)
*Tệp đính kèm:* 7 file `.exe`, 1 file `DEMTU.OUT`

| STT | Tên file | Thuật toán / Chủ đề chính | Liên kết |
|:---:|---|---|:---:|
| 1 | `DEMNT.cpp` | Tách các số trong chuỗi và kiểm tra tính nguyên tố bằng sàng | [DEMNT.cpp](<Bài_GV_Tin/Nộp/day26month8/DEMNT.cpp>) |
| 2 | `DEMTU.cpp` | Tách từ trong chuỗi văn bản, thống kê tần suất độ dài từ | [DEMTU.cpp](<Bài_GV_Tin/Nộp/day26month8/DEMTU.cpp>) |
| 3 | `MATMA.cpp` | Trích xuất số lớn từ xâu ký tự, so sánh và tìm giá trị lớn nhất | [MATMA.cpp](<Bài_GV_Tin/Nộp/day26month8/MATMA.cpp>) |
| 4 | `NGUYENAM.cpp` | Nhận dạng nguyên âm tiếng Anh và in vị trí xuất hiện | [NGUYENAM.cpp](<Bài_GV_Tin/Nộp/day26month8/NGUYENAM.cpp>) |
| 5 | `PASSWORD.cpp` | Kiểm tra độ bảo mật mật khẩu theo nhiều điều kiện | [PASSWORD.cpp](<Bài_GV_Tin/Nộp/day26month8/PASSWORD.cpp>) |
| 6 | `TIMKHOA.cpp` | Tìm kiếm số nguyên lớn nhất cấu thành từ các đoạn ký tự số | [TIMKHOA.cpp](<Bài_GV_Tin/Nộp/day26month8/TIMKHOA.cpp>) |
| 7 | `XOATT.cpp` | Đếm tần suất ký tự và loại bỏ các ký tự xuất hiện liên tiếp | [XOATT.cpp](<Bài_GV_Tin/Nộp/day26month8/XOATT.cpp>) |

<a id="day28month8"></a>
### 3.6. Đợt nộp ngày 28/08 (`day28month8/`)
*Tài liệu đính kèm:* [De_Thi_HSG_Tin_Hoc_Hung_Yen.doc](<Bài_GV_Tin/Nộp/day28month8/De_Thi_HSG_Tin_Hoc_Hung_Yen.doc>) *(Đề thi HSG Hưng Yên)*, 5 file `.exe`

| STT | Tên file | Thuật toán / Chủ đề chính | Liên kết |
|:---:|---|---|:---:|
| 1 | `BIA.cpp` | Trích xuất số lớn, kiểm tra tính đối xứng và so sánh chuỗi số | [BIA.cpp](<Bài_GV_Tin/Nộp/day28month8/BIA.cpp>) |
| 2 | `DEMCP.cpp` | Đếm nhanh số chính phương trong khoảng $[L, R]$ bằng căn bậc hai | [DEMCP.cpp](<Bài_GV_Tin/Nộp/day28month8/DEMCP.cpp>) |
| 3 | `PHILAO.cpp` | Sắp xếp mảng kết hợp Chặt nhị phân (Binary Search) xác định vị trí | [PHILAO.cpp](<Bài_GV_Tin/Nộp/day28month8/PHILAO.cpp>) |
| 4 | `VUON.cpp` | Tính toán chu vi diện tích hình học bằng công thức toán | [VUON.cpp](<Bài_GV_Tin/Nộp/day28month8/VUON.cpp>) |

<a id="suggest"></a>
### 3.7. Nhóm bài tập Gợi ý Nâng cao (`day28month8/Suggest/`)
> Thư mục chi tiết: [Suggest/README.md](<Bài_GV_Tin/Nộp/day28month8/Suggest/README.md>)  
*Tệp đính kèm:* 1 file `CHUANHOA.exe`, 1 file `CHUANHOA.OUT`

| STT | Tên file | Thuật toán / Chủ đề chính | Liên kết |
|:---:|---|---|:---:|
| 1 | `CHUANHOA.cpp` | Chuẩn hóa dấu câu (`. , ! ?`) và khoảng cách từ trong văn bản | [CHUANHOA.cpp](<Bài_GV_Tin/Nộp/day28month8/Suggest/CHUANHOA.cpp>) |
| 2 | `MASO.cpp` | Sàng số nguyên tố phân đoạn (Segmented Sieve) và phân tích thừa số | [MASO.cpp](<Bài_GV_Tin/Nộp/day28month8/Suggest/MASO.cpp>) |

<a id="day28month9"></a>
### 3.8. Đợt nộp ngày 28/09 (`day28month9/`)
*Tài liệu đính kèm:* [DE HSG 9.docx](<Bài_GV_Tin/Nộp/day28month9/DE HSG 9.docx>) *(Đề thi HSG Tin học lớp 9)*

| STT | Tên file | Thuật toán / Chủ đề chính | Liên kết |
|:---:|---|---|:---:|
| 1 | `ROBOT.cpp` | Tính chi phí di chuyển robot về tâm bàn cờ (khoảng cách đường chéo 15 và thẳng 10) | [ROBOT.cpp](<Bài_GV_Tin/Nộp/day28month9/ROBOT.cpp>) |
| 2 | `TOWER.cpp` | Quy hoạch động 3 chiều: Chuẩn hóa xoay hộp, sắp xếp và tìm chiều cao tháp lớn nhất | [TOWER.cpp](<Bài_GV_Tin/Nộp/day28month9/TOWER.cpp>) |
| 3 | `VISIT.cpp` | Thuật toán tham lam (Greedy) lựa chọn hành trình thiên hà theo giá xăng rẻ nhất | [VISIT.cpp](<Bài_GV_Tin/Nộp/day28month9/VISIT.cpp>) |

---

## 4. Danh Sách Tài Liệu & Đề Thi Đi Kèm

Repository lưu trữ 4 tài liệu đề thi và bài tập chính thức:
1. 📄 [BÀI TẬP VỀ Phân tích thừa số nguyên tố...docx](<Bài_GV_Tin/Nộp/day13month9/BÀI TẬP VỀ Phân tích thừa số nguyên tố. Ứng dụng tìm số lượng và tổng các ước của một số..docx>) — Chuyên đề số học.
2. 📄 [HÀ NỘI.pdf](<Bài_GV_Tin/Nộp/day23month9isad/HÀ NỘI.pdf>) — Đề khảo sát / thi học sinh giỏi Hà Nội.
3. 📄 [De_Thi_HSG_Tin_Hoc_Hung_Yen.doc](<Bài_GV_Tin/Nộp/day28month8/De_Thi_HSG_Tin_Hoc_Hung_Yen.doc>) — Đề thi HSG Hưng Yên.
4. 📄 [DE HSG 9.docx](<Bài_GV_Tin/Nộp/day28month9/DE HSG 9.docx>) — Đề thi HSG cấp trường / huyện lớp 9.

---

> 📌 **Ghi chú**: Tên file, cấu trúc thư mục và mã nguồn được đối chiếu chính xác theo hệ thống file thực tế trên ổ đĩa. Mọi liên kết đều có thể nhấp trực tiếp trong trình duyệt hoặc Markdown viewer.
