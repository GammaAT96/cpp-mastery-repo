#include <iostream>
using namespace std;

int f(int n) {
    int k;
    k = (n < 2) ? 1 : f(n - 1 - f(n - 2));
    return k;
}

int main() {
    cout << f(5) << endl;
    return 0;
}
