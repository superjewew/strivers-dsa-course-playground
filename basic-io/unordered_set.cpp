#include<unordered_set>
#include<iostream>
using namespace std;

int main() {
    unordered_set<int> s;

    for (int i = 0; i <= 10; i++) {
        s.insert(i);
    }

    for (auto i = s.begin(); i != s.end(); i++) {
        cout << * i << "\n";
    }

    cout << "unordered set size: " << s.size() << '\n';
    s.erase(1);

    for (auto i = s.begin(); i != s.end(); i++) {
        cout << * i << "\n";
    }

    return 0;
}