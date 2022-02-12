#include <bits/stdc++.h>

using namespace std;

int main()
{
   string stones,jewels;
   cin>>stones>>jewels;
   
   int count=0;
   
   for(int i=0; i<stones.length(); i++)
   {
       for(int j=0; j<jewels.length(); j++)
       {
           if(stones[i]==jewels[j])
           {
               count++;
           }
       }
   }
   cout<<count;
   
   return 0;
}
