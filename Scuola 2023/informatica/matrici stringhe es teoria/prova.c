#include <stdio.h>

int main(){
    int matrice[3][3]={{1,2,3},{4,5,6},{7,8,9}};



     for (int h = 0; h < 3; h++){
        for(int a=0; a<3; a++){
           printf("%d ",matrice[h][a]);

        }

        printf("\n");
    }
    return 0;
}