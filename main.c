#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main()
{
    int     file;
    char    *str;
    
    file  = open("test.txt", O_RDONLY);
    while (get_next_line(file, &str))
        printf("%s\n", str);
    return (0);
}
