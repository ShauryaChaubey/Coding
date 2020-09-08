#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long int arr[4],i,c=0;
    for(i=0;i<4;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+4);
    for(i=1;i<4;i++)
    {
        if(arr[i-1] == arr[i])
        {
            c++;
        }
    }
    cout << c;
}
