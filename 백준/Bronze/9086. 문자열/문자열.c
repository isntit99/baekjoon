#include <stdio.h>
#include <string.h>
int main(){
    int T;
    char words[1001]= {0};
    
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        scanf("%s", words);
        printf("%c%c\n", words[0], words[strlen(words)-1]);
    }
    
    return 0;
}