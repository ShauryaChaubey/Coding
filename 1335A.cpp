#include <iostream>
using namespace std;

int main()
{
    long int t,T;
    cin >> T;
    for(t=0;t<T;t++)
    {
        long long int a,k;
        cin >> a;
        if(a%2 == 0)
        {
            k = (a/2)-1;
        }
        else
        {
            k = a/2;
        }
        cout << k << endl;
    }
}
