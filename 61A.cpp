#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,sr[120];
    string s,str;
    cin >> s;
    cin >> str;
    for(i=0;i<s.length();i++)
    {
        if(s[i] == '0' && str[i] == '1')
        {
            sr[i] = 1;
        }
        else if(s[i] == '1' && str[i] == '0')
        {
            sr[i] = 1;
        }
        else
        {
            sr[i] = 0;
        }
        cout << sr[i];
    }


}
