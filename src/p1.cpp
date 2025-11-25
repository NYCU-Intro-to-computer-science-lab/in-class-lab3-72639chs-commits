// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;
long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
int countPrimeFactors(int n) {
    if (n < 2) return 0;
    int count = 0;
    for (int i = 2; i <= n; i++) {
        int temp = i;
        for (int j = 2; j * j <= temp; j++) {
            while (temp % j == 0) {
                count++;
                temp /= j;
            }
        }
        if (temp > 1) count++;
    }
    return count;
}
int main() {
    int n;
    while (cin >> n && n != 0) {
        cout << n << "! = " << factorial(n) << endl;
        cout << "Prime factors count: " << countPrimeFactors(n) << endl;
        cout << endl;
    }
    return 0;
}
