#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    cin >> x;
    vector<int> sum(x, 1); // Initialize vector with size x and all elements set to 1

    for (int i = 0; i < x; i++) {
        int size;
        cin >> size;
        cout << "heoll" <<endl ;
        
        for (int j = 0; j < size; j++) {
            int k;
            cin >> k;
            cout << "heoll in j" ;
            sum[i] *= k;
        }
    }

    for (int i = 0; i < x; i++) {
        if (sum[i] % 10 == 2 || sum[i] % 10 == 3 || sum[i] % 10 == 5) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}