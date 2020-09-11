#include <iostream>
#include <string>

using namespace std;

int main()
{
   string s;
   cin >> s;
   int i=0,arr[200],j=0;
   while(i < s.length())
   {
       if(s[i] == '.')
       {
           arr[j] = 0;
           j++;
           i++;
       }
       else
       {
           if(s[i+1] == '.')
           {
               arr[j] = 1;
               j++;
               i+=2;
           }
           else
           {
               arr[j] = 2;
               j++;
               i+=2;
           }
       }
   }
   for(i=0;i<j;i++)
   {
       cout << arr[i];
   }
}
