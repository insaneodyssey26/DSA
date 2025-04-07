#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, x; // 'n' mane holo number of baccha, 'x' mane holo gondola r weight limit
    cin >> n >> x; // Input gulo nilo
    vector<int> weight(n); // Weight ta change hobe barbar, tai vector use kora holo
    for (int i = 0; i < n; i++) {  
        cin >> weight[i];  // Weight er input nicche for every baccha
    }

    // Ebar weight gulo sort kora holo, ebar try kora hobe jate first er choto, last er boro element gulo k age add kora jay
    sort(weight.begin(), weight.end()); 
    int left = 0, right = n - 1, gondola = 0;
    while (left <= right) {
        if (weight[left] + weight[right] <= x) {
            left++;  // jodi left er weight + right er weight x er cheye choto hoy tahole left er index ta increase kore dibo
        }
        right--;  // Jodi add korar pore weight ta 'x' er cheye boro hoy tahole right er index ta decrease kore debo
        gondola++;  // Then gondola increase hobe
    }
    cout << gondola;
    return 0;
}