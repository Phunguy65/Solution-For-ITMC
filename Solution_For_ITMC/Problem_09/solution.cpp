#include <iostream>
#include <unordered_set>
using namespace std;

// Hàm kiểm tra xem có tồn tại bộ ba chỉ số đẹp hay không
bool checkBeautifulTriple(int a[], int n)
{
    unordered_set<int> s; // Tập hợp lưu các giá trị của dãy số a
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]); // Thêm a[i] vào tập hợp
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = a[i] + a[j]; // Tính tổng hai phần tử a[i] và a[j]
            if (s.count(sum) > 0 && sum != a[i] && sum != a[j])
                return true; // Nếu tổng này có trong tập hợp thì trả về true
        }
    }
    return false; // Nếu không tìm được bộ ba chỉ số đẹp nào thì trả về false
}

int main()
{
    int T;
    cin >> T;
    while (T)
    {
        int n;               // Biến lưu số phần tử của dãy số
        cin >> n;            // Nhập n từ bàn phím
        int *a = new int[n]; // Mảng lưu các phần tử của dãy số
        for (int i = 0; i < n; i++)
        {
            cin >> a[i]; // Nhập a[i] từ bàn phím
        }
        if (checkBeautifulTriple(a, n))
        { // Nếu có bộ ba chỉ số đẹp thì in ra "Yes"
            cout << "YES" << endl;
        }
        else
        { // Nếu không thì in ra "No"
            cout << "NO" << endl;
        }
        --T;
    }
    return 0;
}