#include<iostream>
using namespace std;

int factorial(int n) {
    if(n == 0) {
        return 1;
    }

    return n * factorial (n-1);
}

int main() {
    int input;
    cin >> input;

    int x = factorial(input);
    cout << x;

    return 0;
}
