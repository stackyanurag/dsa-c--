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
   int p;
   cin >> p;
   bool found = false;
    for(int j=0;j<size;j++) {
        if(array[j]==p) {
            cout << j << endl;
            found = true;
            break;
        }
       
    }
    if(!found) {
        cout << "-1" << endl;
 
}
}
 
int main() {
    average();
    
}