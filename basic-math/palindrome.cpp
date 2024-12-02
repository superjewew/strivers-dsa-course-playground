#include<iostream>
using namespace std;

int reverseNumber(int n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    int result = stoi(s);
    return result;
}

bool isPalindrome(int n) {
    int reversed = reverseNumber(n);

    int left;
    int right;

    return n == reversed;
}

int main() {
    int x;
    while(true) {
        cin >> x;
        cout << isPalindrome(x) << endl;
    }
    return 0;
}