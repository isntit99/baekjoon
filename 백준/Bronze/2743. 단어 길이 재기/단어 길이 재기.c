#include <stdio.h>

int main(){
    char w[101];
    scanf("%s", w);
    
    int count = 0;
    for(int i=0; w[i] != '\0'; i++){
        count++;
    }
    printf("%d", count);
    
    return 0;
}