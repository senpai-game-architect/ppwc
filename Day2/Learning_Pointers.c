#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a = 'a';
    char *ptr = &a;
    printf("%d", ptr);
    return 0;
}
