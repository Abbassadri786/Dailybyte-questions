//Correct Capitalization
#include <bits/stdc++.h>

using namespace std;

int main()
{
  string str;
  cin>>str;
  
  int a=str.size(),found=0,count=0;
  
  if(str[0]>='A' && str[0]<='Z')
      {
          found=1;
      }
      
  
  for(int i=0; i<a; i++)
  {
      if(str[i]>='a' && str[i]<='z'){
        count++; 
      } 
  }
  if((count==0 && found==1) || (count==(a-1) && found==1) ||(count==a && found!=1))
  {
      cout<<"true"<<endl;
  }
  else{
      cout<<"false"<<endl;
  }
   
   return 0;
}
