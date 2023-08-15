#include <iostream>
#include <cmath>
using namespace std;

void solve(int X)
{
    // Khởi tạo kết quả cần tìm
    int res = 1;
    // Duyệt qua tất cả các giá trị có thể của b
    for (int b = 1; b <= sqrt(X); b++)
    {
        // Tìm giá trị lớn nhất của n sao cho b^n không vượt quá X
        int n = log(X) / log(b);
        // So sánh b^n với kết quả hiện tại
        if (pow(b, n) > res)
        {
            res = pow(b, n);
        }
    }
    // In ra kết quả cuối cùng
    cout << res << endl;
}

// Ví dụ
int main()
{
    int X;
    cin >> X;
    solve(X); // In ra kết quả
    return 0;
}