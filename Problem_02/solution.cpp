#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

string longestSubstringWithoutRepeatingChars(string str) {
    int n = str.length();
    int start = 0, end = 0;  // Vị trí bắt đầu và kết thúc của chuỗi con không lặp lại dài nhất
    int maxLen = 0;  // Độ dài chuỗi con không lặp lại dài nhất

    unordered_set<char> charSet;  // Lưu trữ các ký tự đã xuất hiện trong chuỗi con hiện tại

    while (end < n) {
        // Nếu ký tự tại vị trí end đã xuất hiện trong chuỗi con hiện tại
        // Ta cần điều chỉnh vị trí bắt đầu của chuỗi con
        while (charSet.count(str[end])) {
            charSet.erase(str[start]);
            start++;
        }

        // Thêm ký tự tại vị trí end vào chuỗi con hiện tại
        charSet.insert(str[end]);

        // Cập nhật độ dài chuỗi con không lặp lại dài nhất và vị trí kết thúc
        if (end - start + 1 > maxLen) {
            maxLen = end - start + 1;
        }

        end++;
    }

    // Trích xuất chuỗi con không lặp lại dài nhất từ chuỗi ban đầu
    string longestSubstring = str.substr(start, maxLen);

    return longestSubstring;
}

int main() {
    string str;
    cin >> str;
    string result = longestSubstringWithoutRepeatingChars(str);
    cout << result << endl;

    return 0;
}
