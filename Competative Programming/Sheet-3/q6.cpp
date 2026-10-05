#include <iostream>
#include <vector>
using namespace std;
void average() {
 
    long long n;
    long long size;
    cin >> size;
    vector <double> array ;
    for(int i=0;i<size;i++) {
        cin >> n;
        array.push_back(n);
    }
    int start=0;
    int end=size-1;
    while(start<end) {
        swap(array[start],array[end]);
        start++;
        end--;
    }
    for(int j:array) {
        cout << j << " ";
    }
}
int main() {
    average();
}