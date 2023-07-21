#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int shortestUnsortedSubarray(std::vector<int>& nums) {
    int n = nums.size();
    int start = n - 1, end = 0;

    // Tìm chỉ số bắt đầu của dãy con cần sắp xếp
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            start = i;
            break;
        }
    }

    // Tìm chỉ số kết thúc của dãy con cần sắp xếp
    for (int i = n - 1; i > 0; i--) {
        if (nums[i] < nums[i - 1]) {
            end = i;
            break;
        }
    }

    // Tìm giá trị nhỏ nhất và lớn nhất trong dãy con cần sắp xếp
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    for (int i = start; i <= end; i++) {
        min_val = std::min(min_val, nums[i]);
        max_val = std::max(max_val, nums[i]);
    }

    // Mở rộng dãy con cần sắp xếp để đảm bảo tất cả các phần tử trước đều nhỏ hơn min_val và tất cả các phần tử sau đều lớn hơn max_val
    while (start > 0 && nums[start - 1] > min_val) {
        start--;
    }

    while (end < n - 1 && nums[end + 1] < max_val) {
        end++;
    }

    return end - start + 1; // Độ dài ngắn nhất của dãy con cần sắp xếp
}

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i = 0 ; i<n;++i){
        cin >> x[i];
    }
    int length = shortestUnsortedSubarray(x);
    std::cout << length << std::endl;

    return 0;
}
