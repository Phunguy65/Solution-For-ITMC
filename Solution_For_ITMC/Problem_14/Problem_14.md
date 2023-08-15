# Đề bài: Số nguyên tố tung hoành
---
> Cho trước một xâu kí tự chỉ bao gồm các kí tự a, b và ?. Bạn được phép thay thế các kí tự ? thành a hoặc b theo ý muốn. Sau khi thay thế hết các kí tự ? theo cách trên, thì với mỗi cặp hai kí tự liền kề trong xâu ban đầu, ta định nghĩa giá trị của cặp đó như sau:
* Nếu cặp kí tự đó là aa hoặc bb thì gia trị̣ là 0.
* Nếu cặp kí tự đó là ab thì giá trị là 1.
* Nếu cặp kí tự đó là ba thì giá trị là −1.
Khi cộng giá trị của mọi cặp kí tự liền kề trong xâu lại với nhau, ta sẽ thu được ***tổng giá tri***̣ của xâu đó.
> **Yêu cầu:** Hãy tìm cách thay thế tất cả các kí tự ? trong xâu ban đầu thành các kí tự a hoặc b sao cho tổng giá trị của xâu mới thu được là lớn nhất?

# Yêu cầu:
* Input:
>  Dòng đầu tiên chứa số nguyên dương n - độ dài xâu.(1≤n≤10^6^).
Dòng thứ hai chứa xâu độ dài n chỉ gồm các kí tự a, b và ?.
* Output:
> Số nguyên duy nhất là tổng giá trị lớn nhất có thể của xâu thu được.
# Ví dụ mẫu:
# **Input**
> 4
abb?
# **Output**
> 1