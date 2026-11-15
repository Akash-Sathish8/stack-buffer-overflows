#include <stdio.h>
#include <string.h>

struct frame {
    char buf[8];
    int secret;
};

int main(void) {
    struct frame f;
    f.secret = 42;

    strcpy(f.buf, "AAAAAAAAAAA");   // 11 A's plus the null terminator = 12 bytes

    printf("secret = %d\n", f.secret);
    return 0;
}
