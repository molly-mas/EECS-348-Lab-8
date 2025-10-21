#include <stdio.h>


int get_poss(int score){
    for(int TD2 = 0; TD2 < score; TD2+=8){
        for(int TD1 =0; TD1 < score; TD1+= 7){
            for(int TD =0; TD < score; TD +=6){
                for(int FG = 0; FG < score; FG+= 3){
                    for(int Sft = 0; Sft < score; Sft += 2){
                        if(TD2+ TD1 + TD + FG + Sft == 25){
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety \n", TD2/8, TD1/7, TD/6, FG/3, Sft/2);
                        }
                }
            }
        }
    }
} 
}

int main(){
    int score = 0;
    printf("Enter the NFL Score (Enter 1 to stop):");
    scanf(" %d", &score);
    while(score != 1){
        get_poss(score);
        printf("Enter the NFL Score (Enter 1 to stop):");
        scanf(" %d",&score);
    }
    printf("Exiting Program...");
}