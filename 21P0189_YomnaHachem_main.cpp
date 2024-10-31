#include <iostream>
using namespace std;

int summation(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 3, num2 = 4;
    int sum = summation(num1, num2);
    cout << "The summation is equal to: "  << sum << endl;
    return 0;
}
