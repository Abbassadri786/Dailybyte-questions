//Vacuum Cleaner Route
#include <bits/stdc++.h>

using namespace std;

int main()
{
   string str;
   cin>>str;
   
   int c1=0,c2=0,found=0,a;
   a=str.size();
   
   for(int i=0; i<a; i++)
   {
       if(str[i]=='R' || str[i]=='U')
       {
           c1++;
       }
       else{
           c2++;
       }
   }
   
   int result=c1-c2;
   if(result==0){
    cout<<"true";   
   }
   else{
       cout<<"false";
   }
   
   return 0;
}
