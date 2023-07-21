# Đề bài: ADDSUM
---
>  Bảo có một dãy số nguyên a gồm n phần tử. Một bộ ba chỉ số (i,j,k) được coi là đẹp nếu **a~i~ + a~j~ = a~k~** . Hãy cho biết Bảo có thể tìm được một bộ chỉ số đẹp nào đó hay không?
Bạn phải trả lời T truy vấn như vậy.

# Yêu cầu:
* Input:
>  Dòng đầu tiên của file dữ liệu chứa một số nguyên dương T (1≤T≤50) — số truy vấn. Mỗi truy vấn có dạng như sau:
Dòng đầu tiên chứa một số nguyên dương n. (3≤n≤100)
Dòng thứ hai chứa n số nguyên a~1~, a~2~, ..., a~n~. (∣a∣≤10^6^)
* Output:
> Với mỗi truy vấn in ra trên một dòng riêng biệt kết quả của truy vấn đó: Nếu Bảo có thể tìm được ít nhất một bộ chỉ số đẹp, in ra YES, ngược lại in ra NO.
# Ví dụ mẫu:
# **Input**
> 3
3
1 2 3
5
0 1 2 6 9
5
3 1 7 -9 4
# **Output**
>YES
NO
YES