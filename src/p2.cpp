// 題目 2：完美鋪磚計畫 (The Perfect Tiling Project) - 20分

#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
void processInput() {
    int a, b;
    if (cin >> a >> b) {
        cout << gcd(a, b) << endl;
        processInput();
    }
}
int main() {
    processInput();
    return 0;
}
