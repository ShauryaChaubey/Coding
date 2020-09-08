#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n,arr[100],i,sum=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    double k=0;
    k = (double)sum/n;
    cout << fixed << setprecision(12) << k ;


}
