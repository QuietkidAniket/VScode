#include <stdio.h>
#include <stdlib.h>

void display2d(int x, int y){
    if(x == 0 || y == 0)printf("Axis");
    if(x  > 0 && y > 0)printf("Quadrant I");
    else if(x < 0 && y > 0)printf("Quadrant II");
    else if(x < 0 && y < 0)printf("Quadrant III");
    else if(x >0 && y <0)printf("Quadrant IV");
    printf("\n");

    if(x == 0 && y == 0)printf("dot");
    else if(x == 0 || y == 0)printf("line");
    else if(x != 0 && y!= 0)printf("rectangle");
    printf("\n");

    for(int k = 0; k <= abs(y); k++ ){

        for(int h = 0; h <= abs(x); h++){
            printf("*");
            if(h == abs(x) - 1)break;
            printf(" ");
        }
        printf("\n");
        if(k == abs(y) - 1)break;
    }
}


int main(){
    display2d(3,0);
    display2d(0,0);
    display2d(3,3);
    display2d(0,4);
    return 0;
}
