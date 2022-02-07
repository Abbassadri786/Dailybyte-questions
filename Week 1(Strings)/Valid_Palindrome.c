//VALID PALINDROME
#include <bits/stdc++.h>

using namespace std;

int main()
{
   string str;
   cin>>str;
   
   int a=str.size(),found=0;
   
   for(int i=0; i<a; i++)
   {
       if(str[i]!=str[a-i-1])
       {
           found=1;
           break;
       }
   }
   if(found==1)
   {
       cout<<"false"<<endl;
   }
   else
   {
       cout<<"true"<<endl;
   }
   
   return 0;
}
