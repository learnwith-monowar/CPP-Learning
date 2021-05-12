//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
//#include <algorithm>

using namespace std;

#define ll long long

int main() {
    string n;
    cin >> n;
    ll s = n.size();
    ll a[s], g = s-1, p = s-1, k, min = 0, f = s, count = 0;
    
    if(s != 1) {
        for(ll i = 0; i < s-1; i++) {
            k = 1;
            for(ll j = i+1; j < s; j++) {
                if((n[i] == n[j]) && (k <= pow(10,6))) {
                    k++;
                }
                else {
                    break;
                }
            }

            while(g--) {
                a[g] = k;
                break;
            }
        }
    }

    if(s != 1) {
        while(p--) {
            if(min < a[p]) {
                min = a[p];
            }
             else {
                continue;
            }
        }
    }
    else {
        min = 1;
    }
    
    cout << min << endl;

    return 0;
}
