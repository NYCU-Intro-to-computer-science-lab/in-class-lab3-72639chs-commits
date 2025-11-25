// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;
long long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
long long sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}
int main() {
    int n;
    while (cin >> n) {
        cout << factorial(n) << " " << sum(n) << endl;
    }
    return 0;
}
