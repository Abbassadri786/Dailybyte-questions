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
       if(str[i]=='R'){
           c1++;
       }
       else if(str[i]=='L'){
           c1--;
       }
       else if(str[i]=='U'){
           c2++;
       }
       else if(str[i]=='D'){
           c2--;
       }
   }
   
   
   if(c1==0 && c2==0){
    return true;   
   }
   else{
       return false;
   }
   
   return 0;
}
