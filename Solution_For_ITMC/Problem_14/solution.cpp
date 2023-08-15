#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Nhập xâu ban đầu
    int l;
    cin >> l;
    string s;
    cin >> s;
    int n = s.length();

    // Tính tổng giá trị của xâu ban đầu
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
            sum += 1;
        if (s[i] == 'b' && s[i + 1] == 'a')
            sum -= 1;
    }

    // Duyệt lại xâu và thay thế các kí tự ?
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            // Thử thay thế bằng a
            s[i] = 'a';
            int new_sum = sum;
            if (i > 0)
            {
                if (s[i - 1] == 'a' && s[i] == 'b')
                    new_sum += 1;
                if (s[i - 1] == 'b' && s[i] == 'a')
                    new_sum -= 1;
            }
            if (i < n - 1)
            {
                if (s[i] == 'a' && s[i + 1] == 'b')
                    new_sum += 1;
                if (s[i] == 'b' && s[i + 1] == 'a')
                    new_sum -= 1;
            }
            // Nếu tổng giá trị tăng lên, giữ nguyên kí tự a
            if (new_sum > sum)
            {
                sum = new_sum;
            }
            // Nếu không, thử thay thế bằng b
            else
            {
                s[i] = 'b';
                new_sum = sum;
                if (i > 0)
                {
                    if (s[i - 1] == 'a' && s[i] == 'b')
                        new_sum += 1;
                    if (s[i - 1] == 'b' && s[i] == 'a')
                        new_sum -= 1;
                }
                if (i < n - 1)
                {
                    if (s[i] == 'a' && s[i + 1] == 'b')
                        new_sum += 1;
                    if (s[i] == 'b' && s[i + 1] == 'a')
                        new_sum -= 1;
                }
                // Nếu tổng giá trị tăng lên, giữ nguyên kí tự b
                if (new_sum > sum)
                {
                    sum = new_sum;
                }
                // Nếu không, bỏ qua vị trí này
                else
                {
                    s[i] = '?';
                }
            }
        }
    }

    // In ra tổng giá trị của xâu sau khi đã thay thế
    cout << sum << endl;

    return 0;
}