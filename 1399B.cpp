#include <iostream>
#include <algorithm>

using namespace std;

int
main ()
{
  long long int t, T;
  cin >> T;
  for (t = 0; t < T; t++)
    {
        int n,i;
        cin >> n;
        long long int a1[100],a2[100],min1=1000000000,min2=1000000000,c=0;
        for(i=0;i<n;i++)
       {
           cin >> a1[i];
           if(a1[i] < min1)
           {
              min1 = a1[i];
           }
        }

        for(i=0;i<n;i++)
       {
           cin >> a2[i];
           if(a2[i] < min2)
           {
              min2 = a2[i];
           }
       }
       for(i=0;i<n;i++)
       {
           c += max((a1[i]-min1), (a2[i]-min2));
       }
      cout << c << endl;
    }
}
