#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int input[t];
   for(int i=0;i<t;i++)
   {
    cin>>input[i];
   }
   for(int i=0;i<t;i++){
    long long tree[input[i]][input[i]];
    for(int j=0;j<input[i];j++){
        for(int k=0;k<=j;k++){
            if(k==0||k==j)
            {
                tree[j][k]=1;
                cout<<tree[j][k]<<" ";
            }else{
                tree[j][k]=tree[j-1][k-1]+tree[j-1][k];
                cout<<tree[j][k]<<" ";
            }
        }
        cout<<endl;
    }
   }
}