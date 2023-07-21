#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
void calculateRatios(const std::vector<int>& nums) {
    int n = nums.size();
    int count_positive = 0, count_negative = 0, count_zero = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            count_positive++;
        } else if (nums[i] < 0) {
            count_negative++;
        } else {
            count_zero++;
        }
    }

    double ratio_positive = static_cast<double>(count_positive) / n;
    double ratio_negative = static_cast<double>(count_negative) / n;
    double ratio_zero = static_cast<double>(count_zero) / n;

    std::cout << std::setprecision(6) << std::fixed <<  ratio_positive << std::endl;
    std::cout <<std::setprecision(6) << std::fixed<<ratio_negative << std::endl;
    std::cout <<std::setprecision(6) << std::fixed <<ratio_zero << std::endl;
}

int main() {
    int n;
    cin>>n;
    vector<int> x(n);
    for (auto i = 0; i < n; i++)
    {
        cin>>x[i];
    }
    calculateRatios(x);

    return 0;
}
