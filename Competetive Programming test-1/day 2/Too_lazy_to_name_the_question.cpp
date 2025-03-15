#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
    return (a * b) / __gcd(a, b); 
}


void redund(int a[], int *i, int value) {
    for (int j = 0; j < *i; j++) {
        if (a[j] == value) {
            return;
        }
    }
    a[*i] = value;
    (*i)++;       
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int set[c]; 
    int m = 1, n = 1;
    int currentSize = 0;

    
    for (int i = 0; currentSize < c; i++) {
        if ((a * m) < (b * n)) {
            redund(set, &currentSize, a * m);
            m++;
        } else {
            redund(set, &currentSize, b * n);
            n++;
        }
    }

    
    int num = set[c - 1];
    cout << num << " ";

   
    int value;
    if (num % a == 0 && num % b == 0) {
        value = lcm(a, b);
    } else if (num % a == 0) {
        value = a;
    } else {
        value = b;
    }

    
    do {
        num -= value;
        if (num >= 0) {
            cout << num << " ";
        }
    } while (num > 0);

    return 0;
}
