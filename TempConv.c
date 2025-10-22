#include <stdio.h>


int main(){
    float temp = 0;
    char inital_type = 'X';
    char change_type = 'X';
    printf("Enter the Temperature value: ");
    scanf("%f", &temp);
    printf("Enter the original scale (C, F, or K): ");
    scanf(" %c", &inital_type);
    while (inital_type != 'C' || inital_type != 'F' || inital_type != 'K'  ){
        printf("Invalid entry, Enter the original scale (C, F, or K): ");
        scanf(" %c", &inital_type);
    }
    printf("Enter the scale to convert to (C, F, or K): ");
    scanf(" %c", &change_type);
    while (inital_type != 'C' || inital_type != 'F' || inital_type != 'K'  ){
        printf("Invalid entry, Enter the original scale (C, F, or K): ");
        scanf(" %c", &inital_type);
    }
    const char *warning = "No category";
    const char *advise  = "No advice";

    if(inital_type == 'F'){
        if(temp < 32){
            warning = "Freezing";
            advise = "GO INSIDE ITS FROSTBITE TIME";

        }
        else if(temp < 50 ){
            warning = "Cold";
            advise = "Grab a jacket";
        }
        else if(temp < 77){
            warning = "Comfortable";
            advise = "Go enjoy the weather!";
        }
        else if(temp < 95){
            warning = "Hot";
            advise = "Make sure you stay hydrated";
        }
        else if(temp >= 95){
            warning = "Extreame Heat";
            advise = "STAY INSIDE YOU WILL MELT";
        }

        if(change_type == 'C'){
            temp = (temp - 32) * (5.0/9.0);
        }
        else if(change_type == 'K'){
            temp = (temp - 32) * (5.0/9.0) + 273.15;
        }
    }
    else if(inital_type == 'C'){
        if (temp < 0) {
            warning = "Freezing";
            advise = "GO INSIDE ITS FROSTBITE TIME";
        }
        else if (temp < 10) {
            warning = "Cold";
            advise = "Grab a jacket";
        }
        else if (temp < 25) {
            warning = "Comfortable";
            advise = "Go enjoy the weather!";
        }
        else if (temp < 35) {
            warning = "Hot";
            advise = "Make sure you stay hydrated";
        }
        else {
            warning = "Extreme Heat";
            advise = "STAY INSIDE YOU WILL MELT";
        }
        if(change_type == 'F'){
            temp = (temp * 1.8) +32;
        }
        else if(change_type == 'K'){
            temp = temp +273.15;
        }
    }
    else if(inital_type == 'K'){
        if (temp < 273.15) {
            warning = "Freezing";
            advise = "STAY INSIDE ITS FROSTBITE TIME";
        }
        else if (temp < 283.15) {
            warning = "Cold";
            advise = "Grab a jacket";
        }
        else if (temp < 298.15) {
            warning = "Comfortable";
            advise = "go enjoy the weather!";
        }
        else if (temp < 308.15) {
            warning = "Hot";
            advise = "Stay Hydrated";
        }
        else {
            warning = "Extreme Heat";
            advise = "STAY INSIDE YOU WILL MELT";
        }
        if(change_type == 'F'){
            temp = (temp - 273.15) * (9.0/5.0) + 32;
        }
        else if(change_type == 'C'){
            temp = temp - 273.15;
        }
    }
    if (temp > 330.0) {
        warning = "Extreme Heat";
        advise  = "STAY INSIDE YOU WILL MELT";
    }
    printf("Converted temperature: %f %c \n", temp, change_type);
    printf("Temperature category: %s\n", warning);
    printf("Advice: %s\n", advise);
    
}
