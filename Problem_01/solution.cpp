#include <iostream>
#include <vector>
using namespace std;
template <typename T>
std::vector<T> rearrangeArray(const std::vector<T>& arr) {
    int n = arr.size() / 2;
    std::vector<T> result;

    for (int i = 0; i < n; i++) {
        result.push_back(arr[i]);                   // Thêm xi vào mảng kết quả
        result.push_back(arr[i + n]);               // Thêm yi vào mảng kết quả
    }

    return result;
}

template <typename T>
void printArray(const std::vector<T>& arr) {
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    long n;
    cin>>n;
    std::vector<long long> input(n);
    for(auto i = 0; i<input.size();++i){
        cin>>input[i];
    }
    printArray(rearrangeArray(input));
    return 0;
}