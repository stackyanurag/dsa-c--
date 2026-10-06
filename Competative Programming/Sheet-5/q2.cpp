#include <iostream>
using namespace std;
void happy(int n)
{
    int i = 1;
    while (i <= n)
    {

        if (i == 1)
        {
            cout << i;
        }
        else
        {
            cout << " " << i;
        }
        i++;
    }
}

int main()
{
    int n;
    cin >> n;
    happy(n);
}