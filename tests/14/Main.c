/*
 * 正常运行的程序
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    scanf("%s", input);
    fprintf(stdout, "%s\n", input);
    fprintf(stderr, "%s\n", input);
    return 0;
}
