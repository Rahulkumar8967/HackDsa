#include<bits/stdc++.h>
using namespace std;

void explainMap() {
    map<int, int> mpp1;            // Rename the map to mpp1
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp1[1] = 2;
    mpp1.emplace(3, 1);
    mpp1.insert({2, 4});
    mpp3[{2, 3}] = 10;              // Use mpp3 instead of mpp for the pair<int, int> key

    for (auto it : mpp1) {
        cout << it.first << " " << it.second << endl;
    }           //  key               value

    cout << mpp1[1] << endl;
    cout << mpp1[5] << endl;

    auto it1 = mpp1.find(3);
    if (it1 != mpp1.end()) {
        cout << it1->second << endl;
    } else {
        cout << "Key 3 not found" << endl;
    }

    auto it2 = mpp1.find(5);
    if (it2 != mpp1.end()) {
        cout << it2->second << endl;
    } else {
        cout << "Key 5 not found" << endl;
    }
}

//auto it = mpp1.lower_bound(2);
//auto it = mpp1.upper_bound(3);
// erase , swap, size , empty are same as above


int main() {
    explainMap();

    return 0;
}
