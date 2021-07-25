#include <stdio.h>
#include <algorithm>
using namespace std;
 
int n, a[12], b[12], maxv = -2e9, minv = 2e9;
 
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0, cn = 0, t; i < 4; i++) {
        scanf("%d", &t);
        while (t--) b[cn++] = i;
    }
    do {
        int sum = a[0];
        for (int i = 1; i < n; i++) {
            if (b[i - 1] == 0) sum += a[i];
            else if (b[i - 1] == 1) sum -= a[i];
            else if (b[i - 1] == 2) sum *= a[i];
            else sum /= a[i];
        }
        minv = min(minv, sum);
        maxv = max(maxv, sum);
    } while (next_permutation(b, b + n - 1));
    printf("%d\n%d", maxv, minv);
    return 0;
}

