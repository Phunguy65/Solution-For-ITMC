#include <iostream>
using namespace std;

// Hàm chuyển đổi thời gian từ format hh:mm sang số phút
int toMinutes(int hh, int mm)
{
    return hh * 60 + mm; // Mỗi giờ có 60 phút
}

// Hàm chuyển đổi thời gian từ số phút sang format hh:mm
void toHoursMinutes(int minutes)
{
    int hh = minutes / 60; // Số giờ bằng số phút chia cho 60
    int mm = minutes % 60; // Số phút bằng số phút dư khi chia cho 60
    if (hh < 10)
        cout << "0";   // Nếu số giờ nhỏ hơn 10 thì thêm số 0 đằng trước
    cout << hh << ":"; // In ra số giờ và dấu hai chấm
    if (mm < 10)
        cout << "0";    // Nếu số phút nhỏ hơn 10 thì thêm số 0 đằng trước
    cout << mm << endl; // In ra số phút và xuống dòng
}

int main()
{
    int s_hh, s_mm;                // Biến lưu thời gian Bình tỉnh dậy theo format hh:mm
    char c;                        // Biến lưu ký tự hai chấm
    cin >> s_hh >> c >> s_mm;      // Nhập vào thời gian Bình tỉnh dậy từ bàn phím
    int t_hh, t_mm;                // Biến lưu khoảng thời gian Bình đã ngủ theo format hh:mm
    cin >> t_hh >> c >> t_mm;      // Nhập vào khoảng thời gian Bình đã ngủ từ bàn phím
    int s = toMinutes(s_hh, s_mm); // Chuyển đổi thời gian Bình tỉnh dậy sang số phút
    int t = toMinutes(t_hh, t_mm); // Chuyển đổi khoảng thời gian Bình đã ngủ sang số phút
    int p = s - t;                 // Tính ra thời điểm Bình đi ngủ bằng cách trừ đi khoảng thời gian đã ngủ
    if (p < 0)
        p += 24 * 60;  // Nếu p âm thì cộng thêm một ngày (24 giờ) để lấy thời điểm hôm qua
    toHoursMinutes(p); // Chuyển đổi và in ra thời điểm Bình đi ngủ theo format hh:mm
    return 0;
}