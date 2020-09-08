#include <iostream>

using namespace std;

int main()
{
    int t,T;
    cin >> T;
    for(t=0;t<T;t++)
    {
        int a[2000],b[2000],k=0,n,m;
        cin >> n >> m;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin >> b[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i] == b[j])
                {
                    k = a[i];
                    break;
                }
            }
        }
        if(k!=0)
        {
            cout << "YES" << endl;
            cout << "1" << " " << k << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
