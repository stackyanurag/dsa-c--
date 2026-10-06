#include <iostream>
using namespace std;
 
void wonderful() {
    long long n;
    cin >> n;
    
   
    if (n % 2 == 0) {
        cout << "NO";
        return;
    }
    

    int binary[65];
    int len = 0;
    
    
    while (n > 0) {
        binary[len] = n % 2;
        len++;
        n /= 2;
    }

    int left = 0;
    int right = len - 1;
    bool isPalindrome = true;
    
    while (left < right) {
        if (binary[left] != binary[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }