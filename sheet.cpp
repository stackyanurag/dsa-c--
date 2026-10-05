#include <iostream>
using namespace std;
void wonderful() {
    long long n;
    cin >> n;
    arr[];
    

     if(n%2!=0) {
        long double  ans=0,remainder=1;
        while(n>0) {
            remainder=n%2;
            ans= (long long)ans*10 + (long long)remainder;
            n/=2;
        }
        long double revbin=0;
        long long  actual=ans;
        while(ans>0) {
        
        revbin=(long long )revbin*10+(long long)ans%10;
        ans/=10;
        
        }
        if(actual==revbin) {
            cout << "YES"  ;
        }else {
            cout << "NO" ;
        }

        
    }
    else {
        cout << "NO";
    }
}
int main() {
    wonderful();
}