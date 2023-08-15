#include<bits/stdc++.h>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool is_prime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Hàm tìm 25 số nguyên tố tiếp theo từ số nguyên tố khởi nguồn
vector<long long> find_primes(long long n)
{
    vector<long long> primes(26); // Mảng lưu 26 số nguyên tố
    primes[0] = n;          // Số nguyên tố đầu tiên là số khởi nguồn
    long long count = 1;          // Biến đếm số lượng số nguyên tố đã tìm được
    long long num = n + 1;        // Biến duyệt các số từ n + 1 trở đi
    while (count < 26)
    { // Lặp cho đến khi tìm đủ 26 số nguyên tố
        if (is_prime(num))
        {                        // Nếu num là số nguyên tố
            primes[count] = num; // Lưu vào mảng
            count++;             // Tăng biến đếm
        }
        num++; // Tăng biến duyệt
    }
    return primes;
}

// Hàm biến đổi xâu ký tự thành dãy các số tương ứng trong bảng chữ cái
void transform(string s, vector<long long> primes)
{
    for (char c : s)
    {                                 // Duyệt từng ký tự trong xâu
        long long index = c - 'a';          // Tính chỉ số của ký tự trong bảng chữ cái
        cout << primes[index] << " "; // In ra số nguyên tố tương ứng trong mảng primes
    }
    cout << endl;
}

int main()
{
    long long T;
    cin>>T;
    while (T)
    {                                        // Đọc dữ liệu cho đến khi hết file
        long long n;    // Số nguyên tố khởi nguồn
        string s; // Xâu ký tự cần biến đổi
        cin >> n >> s;
        vector<long long> primes = find_primes(n); // Tìm 25 số nguyên tố tiếp theo từ n
        transform(s, primes);                // Biến đổi xâu ký tự thành dãy các số tương ứng trong bảng chữ cái
        --T;
    }
}