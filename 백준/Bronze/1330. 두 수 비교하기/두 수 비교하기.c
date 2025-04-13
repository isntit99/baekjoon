#include <stdio.h>

int main(){
    /*A가 B보다 큰 경우에는 '>'를 출력한다.
A가 B보다 작은 경우에는 '<'를 출력한다.
A와 B가 같은 경우에는 '=='를 출력한다.*/
    
    int A, B;
    scanf("%d %d", &A, &B);
    
    if(A > B){
        printf(">");
    }
    else if(A < B){
        printf("<");
    }
    else
        printf("==");
    
    return 0;
}