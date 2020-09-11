#include <iostream>

using namespace std;

int main()
{
    int n,l,r;
    cin >> n >> l >> r;
    int sum_max=0,sum_min=0,k=1,m=n;
    while(l>0 && n>0)
    {
        sum_min += k;
        k *= 2;
        l--;
        n--;
    }
    if(n > 0)
    {
        sum_min += n;
    }
    k=1;
    while(r>0 && m>0)
    {
        sum_max += k;
        k *= 2;
        r--;
        m--;
    }
    if(m > 0)
    {
        sum_max += (k/2*m);
    }

    cout << sum_min << " " << sum_max;
}
