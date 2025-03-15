#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long prob[t];
    for(int i=0;i<t;i++)
    {
        long long k;
        cin>>k;
       prob[i]=k*4;
        
    }
    for(int i=0;i<t;i++){
        cout<<prob[i]<<endl;
    }
    return 0;


}