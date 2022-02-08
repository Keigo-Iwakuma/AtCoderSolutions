#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> T(N);
    for (int i=0; i<N; i++) {
        cin >> T[i];
    }
    sort(T.begin(), T.end());
    reverse(T.begin(), T.end());
    int sum1 = 0;
    int sum2 = 0;
    for (auto t: T) {
        if (sum1 > sum2) {
            sum2 += t;
        }
        else {
            sum1 += t;
        }
    }
    cout << max(sum1, sum2) << endl;
    return 0;
}