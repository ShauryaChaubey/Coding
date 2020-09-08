#include <iostream>

using namespace std;

int main()
{
    int n,arr[10000],i,j,counter=0,k=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=1;i<n;i++)
    {
        j=0;
        while(j<=i)
        {
            if(arr[j] < arr[i])
            {
               j++;
            }
            else
            {
                break;
            }
        }
        k=0;
        while(k<=i)
        {
            if(arr[k] > arr[i])
            {
                k++;
            }
            else
            {
                break;
            }
        }
        if(j == i || k == i)
        {
            counter++;
        }
    }
    cout << counter;
}
