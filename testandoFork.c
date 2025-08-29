#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    printf("dale\n");
    
    int id = fork();

    for(int cont  = 0; cont < 10; cont++){
        printf("%d", cont);
    }
    printf("~~%d", id);
    printf("\n");
    
    if(id != 0){
        wait();
        for(int cont = 0; cont < 10; cont++){
            printf("%d", cont);
        }
        printf("~~%d", id);
        printf("\n");
    }

    if(id == 0){
        for(int cont = 9; cont >= 0; cont--){
            printf("%d", cont);
        }
        printf("~~%d", id);
        printf("\n");
    }



    return 0;
}