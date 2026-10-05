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
    bool check=true;
    while(start<end) {
        swap(array[start],array[end]);
        start++;
        end--;
        if(array[start]!=array[end]) {
            check=false;
        }
    }
    if(check==true) {
        cout << "YES";
    }else {
        cout << "NO" ;
    }
    
}
int main() {
    average();
}