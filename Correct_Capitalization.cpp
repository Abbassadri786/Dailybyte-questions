//Correct Capitalization
#include <bits/stdc++.h>

using namespace std;

int main()
{
  string str;
  cin>>str;
  
  int a=str.size(),found=0;
  for(int i=0; i<a; i++)
  {
      if(str[i]>='A' && str[i]<='Z')
      {
          found=1;
          break;
      }
  }
  if(found==1)
  {
      cout<<"true"<<endl;
  }
  else{
      cout<<"false"<<endl;
  }
   
   return 0;
}
