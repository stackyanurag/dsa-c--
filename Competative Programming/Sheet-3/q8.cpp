#include <iostream>
using namespace std;
 
int main() {
    int size;
    cin >> size;
    int array[size];
    for(int i=0;i<size;i++) {
        cin >>array[i];
    }
    int i=0;
   int c=INT_MAX;
    while(i<size) {
        if(c>array[i]) {
            c=array[i];
        }
        i++;
 
    }int target=c;
    int count=0;
    for(int i=0;i<size;i++) {
        if(array[i]==target) {
            count++;
        }
    }if(count%2!=0) {
        cout <<"Lucky";
    }else {
        cout << "Unlucky";
    }
}