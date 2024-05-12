#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , min=1000,max=0,i,input,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>input;
    if(i==0)
    {
    min=input;
    max=input;
    
    continue ;
    }
    if(input>max)
    {
    count++;
    max=input;
    }
     if(input<min)
     {
     count++;
     min=input;
     }
     }
     
     cout << count<< endl;
    return 0;
}
