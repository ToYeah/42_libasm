
#include <stdio.h>

extern int ft_strcmp(const char *s1, const char *s2);

int main () {

    char *s1 = "HELLO";
    char *s2 = "HELLO ";
    int res;

    res = ft_strcmp(s1, s2);
    printf("%d\n",res);
    return 0;

}