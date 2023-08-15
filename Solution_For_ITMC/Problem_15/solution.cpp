#include <iostream>
using namespace std;

int main()
{
    int n; // số lượng người xếp hàng
    cin >> n;
    int a[n]; // mảng các mệnh giá tiền
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c25 = 0;     // số lượng tờ tiền 25 đồng
    int c50 = 0;     // số lượng tờ tiền 50 đồng
    bool ans = true; // kết quả
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 25)
        {
            c25++;
        }
        else if (a[i] == 50)
        {
            if (c25 > 0)
            {
                c25--;
                c50++;
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (a[i] == 100)
        {
            if (c50 > 0 && c25 > 0)
            {
                c50--;
                c25--;
            }
            else if (c25 > 2)
            {
                c25 -= 3;
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}