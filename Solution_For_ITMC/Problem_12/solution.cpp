#include <iostream>
#include <cmath>

using namespace std;
bool isPerfectSquare(long long num) {
    long long root = sqrt(num);
    return root * root == num;
}

long long sumOfPerfectSquares(long long n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}

long long sumOfPerfectSquaresInRange(long long a, long long b) {
    if (a > b) return 0;
    long long sum_b = sumOfPerfectSquares(floor(sqrt(b)));
    long long sum_a_minus_1 = sumOfPerfectSquares(floor(sqrt(a - 1)));
    return sum_b - sum_a_minus_1;
}
int main() {
    long long a, b;
    cin >> a >> b;
    long long result = sumOfPerfectSquaresInRange(a, b);
    cout <<  result << endl;

    return 0;
}
