#include<iostream>
#include<string>

using namespace std;
long long pow(int base,int power)
{
    long long result=1;
    while(power--){
        result*=base;

    }
    return result;
}

int main()
{
    int t;
    cin>>t;
    long long dec[t];

    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        string bin;
       cin>>bin;
        dec[i]=0;
        for(int j=x-1;j>=0;j--)
        {
            if(bin[j]=='1')
            dec[i]=dec[i]+pow(2,x-j-1);
        }



    }
    for(int i=0;i<t;i++)
    {
        cout<<dec[i]<<endl;
    }
}