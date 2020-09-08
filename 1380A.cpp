#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t,T;
    cin >> T;
    for(t=0;t<T;t++)
    {
        int n,i,f=0,j;
        cin >> n;
        vector<int>arr(n+1);
        for(i=1;i<=n;i++)
        {
            cin >> arr[i];
        }
        for(i=2;i<=n;i++)
        {
            if(arr[i-1] < arr[i])
            {
                for(j=i+1;j<=n;j++)
                {
                    if(arr[j] < arr[i])
                    {
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)
            {
                break;
            }
        }
        if(f == 1)
        {
            cout << "YES" << endl;
            cout << i-1 << " " << i << " " << j << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
