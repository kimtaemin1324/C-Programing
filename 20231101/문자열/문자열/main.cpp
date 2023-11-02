#include <stdio.h>
#include <string.h>    

int main() //1
{
    char s1[30] = "A Garden Diary";
    char* ptr = strchr(s1, 'a');

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strchr(ptr + 1, 'a');
    }

    return 0;
}
/*
int main() //2
{
    char s1[30] = "A Garden Diary";
    char* ptr = strrchr(s1, 'a');

    printf("%s\n", ptr);

    return 0;
}

int main() //3
{
    char s1[30] = "A Garden Diary";
    char* ptr = strstr(s1, "den");

    printf("%s\n", ptr);

    return 0;
}
int main()
{
    char s1[100] = "A Garden Diary A Garden Diary A Garden Diary";

    char* ptr = strstr(s1, "den");

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strstr(ptr + 1, "den");
    }
}

int main() //4
{
    char s1[30] = "Alice in Wonderland";

    char* ptr = strchr(s1, 'n');

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strchr(ptr + 1, 'n');
    }

    return 0;
}*/