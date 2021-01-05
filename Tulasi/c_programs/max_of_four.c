#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{   int result=0;
    result=a>b?(a>c?(a>d?a:d):c):b>c?(b>d?b:c):c>d?c:d;
    return result;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
/*
Input (stdin)

3
4
6
5
Expected Output

6
*/

