#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    string sent;
    
    getline(cin,sent);
    
    for(int i=0;i<sent.size();i++){
        if(sent[i]==' '&&sent[i+1]!=' ')
        sent[i]='\n';
        else
        sent[i]=toupper(sent[i]);
    }
    cout<<sent;

    return 0;
}