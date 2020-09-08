#include <iostream>

using namespace std;

int main()
{
    int T,t;
    cin >> T;
    for(t=0; t<T; t++)
    {
        long long int n,k=0,c=0,f=-1;
        cin >> n;
        while(n != 1 && n>1)
        {
            if(n%6 == 0)
            {
                n/=6;
            }
            else
            {
                n*=2;
            }
            c++;
        }
        if(n == 1)
        {
            cout << c << endl;
        }
        else
        {
            cout << f << endl;
        }
    }
}
