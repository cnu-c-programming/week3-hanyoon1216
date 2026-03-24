#include <stdio.h>
#include <stdarg.h>

int avarage(int count, ...) {
    int total = 0;
    int avarage = 0;
    va_list ap;
    va_start(ap, count);

    for (int i = 0; i < count; i++) {
        total += va_arg(ap, int);
    }
    
    va_end(ap);
    avarage = total / count;

}
int main() {
    printf("%d\n", avarage(3, 10, 20, 30));
    printf("%d\n", avarage(5, 10, 20, 30, 40, 50));
    return 0;
}
