#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
void average() {
 
    long long n;
    long long size;
    cin >> size;
    long long sum=0;
    vector <double> array ;
    for(int i=0;i<size;i++) {
        cin >> n;
        array.push_back(n);
         sum= sum+(array[i]);
    }if(sum>0){
        cout << sum ;
    }
   else{
    cout << -(sum);
   }
 
    
    
 
}
 
int main() {
    average();
    
}
