#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Usage:\tmain.out <file1> <file2>\n");
        exit(0);
    }

    char *file1 = argv[argc - 2];
    char *file2 = argv[argc - 1];
    return EXIT_SUCCESS;
}
