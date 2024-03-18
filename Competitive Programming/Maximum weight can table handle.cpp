#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxWeight(vector<int>& legs) {
    sort(legs.begin(), legs.end());
    int maxWeight = 0;
    int n = legs.size();

    for (int i = 0; i < n; ++i) {
        maxWeight = max(maxWeight, legs[i] * (n - i));
    }

    return maxWeight;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> legs(n);
        for(int i=0;i<n;i++){
            cin>>legs[i];
        }
        int maxWeightPossible = maxWeight(legs);

        cout<< maxWeightPossible << endl;
    }

    return 0;
}

