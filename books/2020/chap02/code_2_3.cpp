// cout even numbers less than N+1

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i=2; i<=N; i+=2) {
        cout << i << endl;
    }
}