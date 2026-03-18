#include <stdio.h>
int main(void) { 
    int n;
    printf("정수 입력 : ");
    scanf("%d", &n);

    if(n%2) {
        printf("홀수\n");
    }
    else {
        printf("짝수\n");
    }
    (n%2)?printf("홀수\n"):printf("짝수\n");
    
    return 0;  
}
