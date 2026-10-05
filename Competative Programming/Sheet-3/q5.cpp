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
    long long lowest=INT_MAX;
    long long haha;
    for(int i=0;i<size;i++){
    if(array[i]<lowest) {
        lowest =array[i];
        haha=i+1;


    }
    }cout << lowest  << " " <<  haha;

}
int main() {
    average();
}