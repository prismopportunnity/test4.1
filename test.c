#include <stdio.h>
//公约数和公倍数
int main() {
    int a;
    int b;
    int temp;
    int T;
    int a_save;
    int b_save;

    scanf("%d", &T);

    while (T--) {
        scanf("%d%d", &a, &b);

        if (a < b) {
            temp = a;
            a = b;
            b = temp;
        }

        a_save = a;
        b_save = b;
        while (a % b != 0) {
            temp = a % b;
            a = b;
            b = temp;
        }

        printf("%d %d\n", b, a_save * b_save / b);
    }
    return 0;
}