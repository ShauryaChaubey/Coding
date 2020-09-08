#include <iostream>
using namespace std;

int main()
{
    int a[100][3],i,j,n,sum=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin >> a[i][j];
        }
    }
    j=0;
    while(j<3)
    {
        sum = 0;
        for(i=0;i<n;i++)
        {
            sum+=a[i][j];
        }
        if(sum != 0)
        {
            cout << "NO";
            break;
        }
        else
        {
            j++;
        }
    }
    if(j > 2)
    {
        cout << "YES";
    }

}
