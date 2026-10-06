#include <iostream>
using namespace std;
void check_prime()
{
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        bool isprime = m >= 2;
        for (int j = 2; j * j <= m; j++)
        {
            if (m % j == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime == false)
        {
            cout << "NO" << endl;
            ;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}

int main()
{

    check_prime();
}