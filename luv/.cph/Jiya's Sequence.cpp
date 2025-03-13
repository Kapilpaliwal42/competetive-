#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
   
    int sum[x];
    for (int i = 0; i < x; i++) {
        int size;
        cin >> size;
        sum[i]=1;
       
        
        for (int j = 0; j < size; j++) {
            int k;
            cin >> k;
           
            sum[i]=sum[i]*(k%10);
        }
    }

    for (int i = 0; i < x; i++) {
        sum[i]=sum[i]%10;
        if (sum[i] == 2 || sum[i] == 3 || sum[i] == 5) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}