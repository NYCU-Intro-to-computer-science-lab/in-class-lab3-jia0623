#include <iostream>
using namespace std;

int fib(int n, int depth) {
    for (int i = 0; i < depth; i++) {
        cout << "|--";
    }
    cout << "SEARCH fib(" << n << ")" << endl;

    if (n == 1 || n == 2) {
        for (int i = 0; i < depth; i++) {
            cout << "|--";
        }
        cout << "GET fib(" << n << ") = 1" << endl;
        return 1;
    }

    int a = fib(n - 1, depth + 1);
    int b = fib(n - 2, depth + 1);
    int result = a + b;

    for (int i = 0; i < depth; i++) {
        cout << "|--";
    }
    cout << "GET fib(" << n << ") = " << result << endl;

    return result;
}

int main() {
    int n;
    cin >> n;

    int ans = fib(n, 0);
    cout << ans << endl;

    return 0;
}

