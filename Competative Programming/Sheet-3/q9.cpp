#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size ;
    cin >> size;
    vector <int> array(size);
    for(int i=0;i<size;i++) {
        cin >>array[i];
    }
    int a=INT_MAX;
    int b=INT_MIN;
    int maxindex=0;
    int minindex=0;
    for(int i=0;i<size;i++) {
        if(array[i]<a) {
            a= array[i];
            minindex=i;

        }
        if(array[i]>b) {
            b=array[i];
             maxindex=i;
        }

    }
    swap(array[minindex],array[maxindex]);
    
    for(int i=0;i<size;i++) {
        cout << array[i] << " " ;
    }
    
}