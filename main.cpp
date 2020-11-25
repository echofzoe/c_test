#include <iostream>

using namespace std;

int climbStairs(int n);

int main() {

    cout << "jenkins测试 - 04" << endl;

    cout << climbStairs(7) << endl;

    return 0;
}

int climbStairs(int n) {
    if (n == 0) return 1;

    int twoBack = 1;
    int oneBack = 1;
    int cur;

    for (int i = 2; i <= n; ++i) {
        cur = oneBack + twoBack;
        twoBack = oneBack;
        oneBack = cur;
    }

    return cur;
}
