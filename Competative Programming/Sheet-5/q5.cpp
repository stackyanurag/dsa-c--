#include <iostream>
using namespace std;
void max_min() {
    int size;
    cin >>size ;
    int arr[size];
    
    int lar =0;
    int sma =INT_MAX;
    for(int i=0;i<size;i++) {
        cin >>arr[i];
        
        if(arr[i]>lar) {
            lar=arr[i];
        }
        if(arr[i]<sma) {
            sma=arr[i];
        }
 
    }cout << sma <<" " << lar << endl;
    
}
 
int main() {
    max_min();
    
}