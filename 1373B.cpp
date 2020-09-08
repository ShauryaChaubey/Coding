#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t,T;
    cin >> T;
    for(t=0;t<T;t++)
    {
        string s;
        int i=1,c=0;
        cin >> s;
        while(i<s.length())
        {
            if(s[i] == '0' && s[i-1] == '1' || s[i] == '1' && s[i-1] == '0')
            {
                c++;
                s.erase(i-1,2);
                i = 1;
            }
            else
            {
                i++;
            }
        }
        if(c%2 == 0 || c == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }

    }
}
