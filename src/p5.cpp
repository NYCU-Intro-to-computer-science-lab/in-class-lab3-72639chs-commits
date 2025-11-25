#include <iostream>
#include <cmath>

using namespace std;
void hanoi(int n, int from, int to, int aux);
    if (n == 1) {
        cout << "Move disk 1 from" << from << "to" << to << endl;
        return; 
    }
hanoi(n-1, from, aux, to);
cout << "Move ring" << n << "from" << from << "to" << to << endl;
hanoi(n-1, to, from, aux);

int main() {
    int n;
    while (cin >> n) {
     hanoi(n,'a','b','c');   
    }
    return 0;
}
