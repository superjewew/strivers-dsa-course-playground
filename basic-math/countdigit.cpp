#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int input) {
    int divider = 10;
    int result = 1;

    while(true) {
        int x = input % divider;
        if (x == input) {
            break;
        }

        result += 1;
        divider *= 10;
    }

    return result;
}

int optimalCountDigit(int n) {
    int x = (int)(log10(n)+1);
    return x;
}

int main() {
    int x;
    cin >> x;
    cout << "digit is " << optimalCountDigit(x) << endl;
    return 0;
}