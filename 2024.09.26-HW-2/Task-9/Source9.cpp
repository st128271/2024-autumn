#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
    int k, w;
    scanf("%d %d", &k, &w);
    int a[3], b[3];
    scanf("%d %d %d %d %d %d", &a[0], &b[0], &a[1], &b[1], &a[2], &b[2]);
    for (int i = 0; i < (1 << 3); ++i) {
        int count = 0;
        int wes = 0;
        for (int j = 0; j < 3; ++j) {
            if (i & (1 << j)) {
                wes += a[j];
                count += b[j];
            }
        }
        if (wes <= w && count >= k) {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return EXIT_SUCCESS;
}