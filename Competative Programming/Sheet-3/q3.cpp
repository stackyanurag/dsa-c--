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
   for(int i=0;i<size;i++) {
    if(array[i]>0) {
        array[i] =1;
        cout << array[i] << " " ;
    }else if(array[i]<0) {
        array[i]=2;
        cout << array[i] << " ";
    }else{
        cout << "0" << " ";
    }
   }
  
}
 
int main() {
    average();
    
}