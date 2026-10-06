#include <iostream>
using namespace std;
void haha()
{
    int n, m;
    char c;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m >> c;

        int j = 0;
        while (j < m)
        {
            cout << c << " ";
            j++;
        }
        cout << endl;
    }
}

int main()
{
    haha();
}