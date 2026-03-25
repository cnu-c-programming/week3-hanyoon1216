#include <stdio.h>
#include <stdarg.h>

void my_sum(char type, int count, ...) {
    int sum = 0;
    va_list ap;
    va_start(ap, count);
    if (type == 'S') {
        for (int i = 0; i < count; i++) {
            char *s = va_arg(ap, char *);
            if (i > 0) {
                printf(" ");
            }
            printf("%s", s);
        }
    }
    else if (type == 'C') {
        for (int i = 0; i < count; i++) {
            char *c = va_arg(ap, char *);
            printf("%s", c);
        }
    }
    else if (type == 'D') {
        for (int i = 0; i < count; i++) {
            sum += va_arg(ap, int);
        }
        printf("%d", sum);
    }

    printf("\n");
    va_end(ap);
}

int main() {
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, "C", "N", "U");
    my_sum('D', 4, 10, 20, 30, 40);

    return 0;
}
