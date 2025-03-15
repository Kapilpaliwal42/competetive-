#include<bits/stdc++.h>
using namespace std;
bool prime(int i){
    if(i<=1){
        return false;
    }else{
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0){
                return false;
            }

        }
    }
    return true;
}
int add(int arr[],int i)
{
    int sum=0;
    for ( int j = 0; j < i; j++)
    {
        sum=sum+arr[j];

    }
    return sum;
}
int main()
{
    string input;
    cin>>input;
    int num[input.length()];
    for(int i=0;i<input.length();i++)
    {
        if(input[i]>='A'&&input[i]<='Z')
        {
            num[i]=-1*tolower(input[i]);
        }else if(input[i]>='a'&&input[i]<='z'){
            num[i]=toupper(input[i]);
        }
    }
    int x=add(num,input.length());
    if(x<0){
        x=-x;
    }
    
    bool isprime=prime(x);
    if(isprime){
        cout<<1;
    }else{
        cout<<0;
    }


}
