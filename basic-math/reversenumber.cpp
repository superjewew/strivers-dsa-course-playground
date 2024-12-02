#include<iostream>
#include<string>
using namespace std;

int reverseNumber(int n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    int result = stoi(s);
    return result;
}

int main() {
    int x;
    cin >> x;
    cout << reverseNumber(x);
    return 0;
}