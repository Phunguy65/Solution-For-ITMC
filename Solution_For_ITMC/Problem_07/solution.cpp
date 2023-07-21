#include <iostream>
#include <string>
using namespace std;

// Hàm chuyển đổi một số hệ 10 thành ký tự ASCII
char decToChar(int n)
{
    // Kiểm tra n có nằm trong khoảng từ 0 đến 255 hay không
    if (n < 0 || n > 255)
    {
        // Nếu không, trả về ký tự rỗng
        return '\0';
    }
    // Nếu có, trả về ký tự tương ứng
    return char(n);
}

// Hàm chuyển đổi một chuỗi các số hệ 10 thành chuỗi ký tự ASCII
string decToASCII(string s)
{
    // Khởi tạo chuỗi kết quả rỗng
    string result = "";
    // Khởi tạo biến lưu trữ số hệ 10 hiện tại
    int num = 0;
    // Duyệt qua từng ký tự trong chuỗi s
    for (int i = 0; i < s.length(); i++)
    {
        // Nếu ký tự là số từ 0 đến 9
        if (s[i] >= '0' && s[i] <= '9')
        {
            // Nhân num với 10 và cộng thêm giá trị của ký tự hiện tại
            num = num * 10 + (s[i] - '0');
            // Nếu num nằm trong khoảng từ 97 đến 122 (chữ cái thường)
            if (num >= 97 && num <= 122)
            {
                // Chuyển đổi num thành ký tự ASCII và thêm vào chuỗi kết quả
                result += decToChar(num);
                // Đặt lại num bằng 0 để tiếp tục xử lý số tiếp theo
                num = 0;
            }
        }
        // Nếu ký tự không phải là số, bỏ qua
        else
        {
            continue;
        }
    }
    // Trả về chuỗi kết quả
    return result;
}

// Hàm chính để kiểm tra chương trình
int main()
{
    // Nhập vào một chuỗi các số hệ 10
    int T;
    cin >> T;
    while (T)
    {
        string input;
        cin >> input;

        // Chuyển đổi chuỗi thành chuỗi ký tự ASCII và in ra màn hình
        string output = decToASCII(input);
        cout << output << endl;
        --T;
    }

    return 0;
}
