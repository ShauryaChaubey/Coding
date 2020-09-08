#include <iostream>
using namespace std;

int main()
{
    int n,m,c=0,i,j;
    cin >> n >> m;
    for(i=n+1;i<=50;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                c++;
            }
        }
        if(c==0)
        {
            break;
        }
    }
    if(i == m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
