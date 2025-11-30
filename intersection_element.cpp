#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> ans;
    int arr1[6] = {1, 2, 2, 2, 3, 4};
    int arr2[4] = {2, 2, 3, 3};
    int i = 0, j = 0;

    while (i < 6 && j < 4) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    // Print the result
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
