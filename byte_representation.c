#include <stdio.h>

typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, size_t len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf(" %.2x", start[i]);
    }
    printf("\n");

    if (start[0] == 0x78)
    {
        printf("此电脑为小端系统\n");
    }
    else
    {
        printf("此电脑为大端系统\n");
    }
}

void show_int(int x)
{
    show_bytes((byte_pointer)&x, sizeof(int));
}

int main()
{
    int x = 0x12345678;
    show_int(x);
    return 0;
}
