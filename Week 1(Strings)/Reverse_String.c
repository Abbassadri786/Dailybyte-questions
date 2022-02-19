#include <bits/stdc++.h>

using namespace std;

int main()
{
   char temp;
   string str;
   getline(cin,str);
   
  int a=str.size();
  
  for(int i=0; i<=a/2; i++)
  {
      temp=str[i];
      str[i]=str[a-i-1];
      str[a-i-1]=temp;
  }
  
  cout<<str;
   
   return 0;
}
