#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i,c=0;
    for(i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
        {
            c++;
        }
    }
    if(c > s.length()/2)
    {
        for(i=0;i<s.length();i++)
        {
            if(islower(s[i]))
            {
                s[i] = s[i]-32;
            }
        }
    }
    else
    {
        for(i=0;i<s.length();i++)
        {
            if(isupper(s[i]))
            {
                s[i] = s[i]+32;
            }
        }
    }
    cout << s;
}
