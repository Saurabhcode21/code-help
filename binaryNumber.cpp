#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int ans = 0;
    int place = 1;

    while (n != 0) {
        int bit = n & 1;
        ans = bit * place + ans;
        n = n >> 1;
        place *= 10;
    }

    cout << "Binary is: " << ans << endl;
    return 0;
}
