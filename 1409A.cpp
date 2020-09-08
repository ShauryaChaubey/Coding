#include <iostream>

using namespace std;

int main()
{
    long long int t,T;
    cin >> T;
    for(t=0;t<T;t++)
    {
        long long int a,b,k=0,c=0;
        cin >> a >> b;
        k = abs(a-b)/10;
        c = abs(a-b)%10;
        if(c == 0)
        {
            cout << k << endl;
        }
        else
        {
            cout << k+1 << endl;
        }
    }
}
