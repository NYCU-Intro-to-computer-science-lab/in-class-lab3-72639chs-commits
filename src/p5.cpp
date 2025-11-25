#include <iostream>
#include <cmath>

using namespace std;
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "Move ring 1 from " << from << " to " << to << endl;
        return;
    }
    hanoi(n - 1, from, aux, to);
    cout << "Move ring " << n << " from " << from << " to " << to << endl;
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    while (cin >> n) {
     hanoi(n,'a','b','c');   
    }
    return 0;
}
