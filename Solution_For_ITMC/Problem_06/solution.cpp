#include <bits/stdc++.h>
const int MOD = 1000000007; // 10^9 + 7

int power_mod(int base, int exponent, int modulus) {
    int result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * 1LL * base) % modulus; // Sử dụng 1LL để đảm bảo tính toán dưới kiểu long long
        }
        base = (base * 1LL * base) % modulus;
        exponent /= 2;
    }
    return result;
}

int main() {
    int a, b;
    std::cin >> a;
    std::cin >> b;
    int result = power_mod(a, b, MOD);
    std::cout <<  result << std::endl;

    return 0;
}
