#include <iostream>
using namespace std;
void draw(int a, int b)
{
    // Duyệt qua các hàng của hình vuông cạnh a
    for (int i = 0; i < a; i++)
    {
        // Duyệt qua các cột của hình vuông cạnh a
        for (int j = 0; j < a; j++)
        {
            // Kiểm tra xem vị trí (i, j) có thuộc vùng bị cắt hay không
            if (i >= a - b && j >= a - b)
            {
                // Nếu có, in ra khoảng trắng
                cout << " ";
            }
            else
            {
                // Nếu không, in ra dấu *
                cout << "* ";
            }
        }
        // Xuống dòng sau mỗi hàng
        if (i == a - 1)
        {
            continue;
        }
        else
        {
            cout << endl;
        }
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    draw(a, b);
    return 0;
}