#include <stdio.h>
#include <string.h>
#include <assert.h>

char fib[3][2100];
char temp[10001][2100];

char *str_revese_inplace(char *s)
{
    char *left = s;
    char *right = s + strlen(s);
    while (right > left)
    {
        right--;
        char t = *right;
        *right = *left;
        *left = t;
        left++;
    }
    return s;
}

char *str_add(char *ssum, const char *sa, const char *sb)
{
    const char *pa = sa + strlen(sa);
    const char *pb = sb + strlen(sb);
    char *psum = ssum;
    int carry = 0;
    while (pa > sa || pb > sb || carry)
    {
        int sum = carry;
        if (pa > sa) sum += *(--pa) - '0';
        if (pb > sb) sum += *(--pb) - '0';
        *psum++ = sum % 10 + '0';
        carry = sum / 10;
    }
    *psum = '\0';
    return str_revese_inplace(ssum);
}

int main()
{
    strcpy(fib[0], "1");
    strcpy(fib[1], "1");
    strcpy(temp[0], fib[0]);
    strcpy(temp[1], fib[1]);
    for (int i = 2; i <= 10000; i++)
    {
        //printf("%s\n", str_add(fib[2], fib[1], fib[0]));
        strcpy(temp[i], str_add(fib[2], fib[1], fib[0]));
        strcpy(fib[0], fib[1]);
        strcpy(fib[1], fib[2]);
    }
    int test; scanf("%d", &test);
    while(test--)
    {
        int n; scanf("%d", &n);
        printf("%s\n", temp[n]);
    }
    return 0;
}
