# Đề bài: Chuỗi Ẩn
---
>  Cho đoạn mã gồm một chuỗi các chữ số liên tiếp không chứa dấu cách. Tác giả cho biết các số trong đoạn mã trên chính là các số hệ 10 **(Dec)** trong bảng mã ASCII, được viết liền vào nhau.
**Yêu cầu**: Hãy tìm ra chuỗi ký tự ẩn đó bằng cách chuyển đổi những con số trong đoạn mã trên sang dạng plaintext với điều kiện chuỗi ký tự ẩn là một **chuỗi chỉ chứa chữ cái thường**. Biết rằng đoạn mã ban đầu là chuẩn xác khi dịch sang chuỗi ký tự (không thừa, không thiếu).

# Yêu cầu:
* Input:
>  Dòng đầu tiên chứa T là số lượng các bộ Test. (1 $$\leq$$ T $$\leq$$ 100)
T dòng tiếp theo, mỗi dòng chứa chứa 1 chuỗi số **s** bất kỳ thoả mãn yêu cầu đề bài. (2 ≤ s.length() ≤ 10^6^)
* Output:
> Mỗi Test một dòng, in ra dãy ký tự thu được.
# Ví dụ mẫu:
# **Input**
> 3
103
112112
115105101100114110114114118
# **Output**
>g
pp
siedrnrrv