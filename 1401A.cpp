#include <iostream>

using namespace std;

int main()
{
    int t,T;
    cin >> T;
    for(t=0;t<T;t++)
    {
        long long int a,b,k=0;
        cin >> a >> b;
        if(a < b)
        {
            k = b-a;
        }
        else if(a%2 == b%2)
        {
            k = 0;
        }
        else
        {
            k = 1;
        }
        cout << k << endl;
    }
}
