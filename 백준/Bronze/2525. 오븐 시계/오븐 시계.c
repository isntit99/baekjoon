#include <stdio.h>

int main(){
    int h, m, cook;
    scanf("%d %d\n", &h, &m);
    scanf("%d", &cook);
    
    m = m+cook;
    
    if(m >= 60){
        h = h + (m/60);
        m = m % 60;
    }
    if(h >= 24){
        h = h % 24;
    }
    printf("%d %d", h, m);
    
    return 0;
}