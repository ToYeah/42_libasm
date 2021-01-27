
#include <stdio.h>
extern size_t ft_strlen(char *); // extern 宣言でアセンブラ内の関数を読み込む

int

main () {

    char *str = "HELLO WORLD";
    size_t res;

    res = ft_strlen(str);
    printf("%ld\n",res);
    return 0;

}