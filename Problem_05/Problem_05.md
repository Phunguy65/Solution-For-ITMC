# Đề bài: Lợi nhuận
---
>  Thực đơn của chuỗi cửa hàng thức ăn nhanh đang bán một chiếc bánh mì kẹp thịt, một lon nước ngọt và một bữa ăn kết hợp gồm một chiếc bánh mì kẹp thịt và một lon nước ngọt, với mức giá mà bạn đã biết.
Họ đã chọn giá bán cho từng mặt hàng trước tiên bằng cách xác định tổng chi phí sản xuất các mặt hàng riêng lẻ và sau đó cộng một giá trị cố định vào đó, đại diện cho lợi nhuận của họ . Giả sử rằng chi phí làm một chiếc bánh mì kẹp thịt thông thường là cố định và chi phí làm một cốc nước ngọt thông thường là cố định.
Ví dụ: nếu chi phí làm một chiếc bánh mì kẹp thịt thông thường là 206 , chi phí của một lon nước ngọt thông thường là 145 và lợi nhuận cố định là 69 thì chuỗi thức ăn nhanh sẽ đặt giá bán như sau:

| Giá sản xuất | Lợi nhuận | Giá bán |
|:------------:|-----------|---------|
| Bánh mì: 206 | 69        | 275     |
| Nước: 145    | 69        | 174     |
| Combo: 351   | 69        | 420     |
# Yêu cầu:
> Với giá của một chiếc bánh mì kẹp thịt, một lon nước ngọt và một bữa ăn kết hợp trên thực đơn, nhiệm vụ của bạn là tính toán lợi nhuận cố định. Hoàn thành hàm có tên profit trong đó nhận ba số nguyên biểu thị giá bán của một chiếc bánh mì kẹp thịt, một lon nước ngọt và một bữa ăn kết hợp tương ứng và trả về một số nguyên biểu thị lợi nhuận cố định.
* Input:
>  Dòng đầu một số T (1 $$\leq$$ n $$\leq$$ 10^3^)
Các dòng tiếp theo là các kịch bản mô tả một dãy số lần lượt là b,s,c với ( 3 ≤ c ≤ 2000 , 2 ≤ b , s < c )
* Output:
> Đối với mỗi tình huống, hãy in một dòng chứa một số nguyên biểu thị lợi nhuận mà chuỗi thức ăn nhanh thu được từ mỗi lần mua hàng.
# Ví dụ mẫu:
# **Input**
>3
275 214 420
6 9 11
199 199 255
# **Output**
>69
4
143