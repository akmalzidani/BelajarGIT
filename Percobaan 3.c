#include <stdio.h>

int main()
{
    int n, i, pembagi, bil=2;
    printf("Masukkan banyaknya suku  : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(pembagi=2; pembagi<bil; pembagi++){
            printf("%d", bil);
        }
        printf("\n");
    }
}
