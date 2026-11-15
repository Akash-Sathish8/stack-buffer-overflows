#include <stdio.h>

void show_frame(void) {
    char buf[8];
    void *fp = __builtin_frame_address(0);   // where this function's frame record starts

    printf("buf[0]               is at %p\n", (void *)&buf[0]);
    printf("buf[7]               is at %p\n", (void *)&buf[7]);
    printf("saved frame pointer  is at %p\n", fp);
    printf("return address       is at %p\n", (void *)((char *)fp + sizeof(void *)));
    printf("\nbytes from buf[0] to the return address: %ld\n",
           (long)(((char *)fp + sizeof(void *)) - &buf[0]));
}

int main(void) {
    show_frame();
    return 0;
}
