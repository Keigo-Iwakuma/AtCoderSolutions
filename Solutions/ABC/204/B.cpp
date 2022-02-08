#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    long long sum = 0;
    for (int i=0; i<N; i++) {
        cin >> A[i];
        if (A[i] > 10) {
            sum += A[i] - 10;
        }
    }
    cout << sum << endl;
    return 0;
}