// #include <stdio.h>
// #include <unistd.h>
// int main()
// {
//     // int x = printf("Hello, World! %d\n", 1337);
//     // printf("%d", x);
//     // int x = write(1, "Hello\n", 6);
//     printf("%i\n", x);
// }

#include <stdio.h>
int main()
{
    int x = printf("%p\n", NULL);
    printf("%d\n", x);
}