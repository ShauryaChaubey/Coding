#include <iostream>

using namespace std;

int main()
{
    int n,k,i,arr[150],j=-1,c=0,sum=0;
    cin >> n >> k;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=8 && k > 0)
        {
            k -= 8;
            c++;
            sum += (arr[i]-8);
        }
        else if(arr[i]<8 && k > 0)
        {
            if(sum >= (8-arr[i]) || k <= sum+arr[i])
            {
                sum -= (8-arr[i]);
                k -= 8;
            }
            else
            {
                k -= arr[i];
            }
            c++;
        }
    }
    if(k <= 0)
    {
        cout << c;
    }
    else
    {
        cout << j;
    }
}
