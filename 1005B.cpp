#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;
    long long int n, i=s.length()-1, j=t.length()-1, c=0;
    while(i>=0 && j>=0)
    {
        if(s[i] == t[j])
        {
            c++;
            i--;
            j--;
        }
        else
        {
            break;
        }
    }
    n = (s.length()+t.length())-(c*2);
    cout << n;
}
