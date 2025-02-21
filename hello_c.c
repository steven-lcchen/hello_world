#include <stdio.h>
#include <stdlib.h>

int main() {
        printf("Hello, World! w/ C\n");
        printf("press ENTER key ...");
        getchar();
        system("read -p \"Press ENTER to continue(BASH system call)\""); // BASH
        return 0;
}