#include <iostream>

using namespace std;

int main()
{
    int n,m,arr[200][200],c=0,i,j;
    cin >> n >> m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*m;j++)
        {
            cin >> arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*m;j+=2)
        {
            if(arr[i][j] == 1 || arr[i][j+1] == 1)
            {
                c++;
            }
        }
    }
    cout << c;
}
