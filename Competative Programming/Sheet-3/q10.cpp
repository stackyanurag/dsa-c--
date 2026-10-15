#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<char> array(a + b + 1);
    for (char& ch : array) {
        cin >> ch;
    }

    cout << (array[a] == '-' ? "Yes" : "No");
}