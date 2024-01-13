#include<stdio.h>
#define ARRAY_SIZE 336
#include <string.h>

int main()
{
    int i = 0, j;
    double average[6];
    double yearly_average[6];
    double lakes[366][8];
    //amount of space needed to allow the program to output lake names along with the derised values
    char lakenames[8][20] = {"Superior", "Michigan", "Huron", "Erie", "Ontario", "St. Clair"};

    FILE *data;
    data = fopen("data.txt", "r"); //opens the file 
    printf("Question 1: \n");
    printf("\n");

    while (!feof(data)){

        do { //this loop repeatedly reads the data as long as i and j conditions are met

            for (j=0;j<8;j++){
                fscanf(data, "%lf", &lakes[i][j]);
            }

            i++;
        }
        while (i<366);


        for (j=2;j<8;j++){ //this loop reads the amount of colomns and does not go over the max

            int i;
            double r = 0, total;

            for (i=0;i<366;i++) //this loop reads the amount of rows and does not go over the max 

                r = r + lakes[i][j];

                if (r>0){
                    //using j-2 as array size to disregard the first two colomns
                    yearly_average[j-2] = r/366; //finding the yearly average
                    fscanf(data, "%s", &lakenames[0][20]); //reading the names of lakes
                    printf("Average for lake: %s is %lf\n", &lakenames[j-3][20], yearly_average[j-2]);

                }

                total = total + yearly_average[j-2]; //finding the total from all lakes combined

                if (total>0){

                    average[5] = total/6; //finding the total average

                }

                }
                
                printf("The total average for all lakes combined is %lf", average[5]);
                {
                printf("\n\nQuestion 2: \n");
                //the following statements determine if a specific lake's average is above the combined average
                if (yearly_average[0]>average[6]){ 
                    printf("\nLake: %s is above the combined average of all lakes.\n", "Superior");
                } else{
                    printf("\nLake: %s is below the combined average of all lakes.\n", "Superior");
                }
                
                if (yearly_average[1]<average[6]){
                    printf("Lake: %s is below the combined average of all lakes.\n", "Michigan");
                } else{
                    printf("Lake: %s is above the combined average of all lakes.\n", "Michigan");
                }
                
                if (yearly_average[2]<average[5]){
                    printf("Lake: %s is below the combined average of all lakes.\n", "Huron");
                } else{
                    printf("Lake: %s is above the combined average of all lakes\n", "Huron");
                }
                
                if (yearly_average[3]<average[6]){
                    printf("Lake: %s is below the combined average of all lakes.\n", "Erie");
                } else{
                    printf("Lake: %s is above the combined average of all lakes.\n", "Erie");
                }
                
                if (yearly_average[4]<average[6]){
                    printf("Lake: %s is below the combined average of all lakes.\n", "Ontario");
                } else{
                    printf("Lake: %s is above the combined average of all lakes.\n", "Ontario");
                }
                
                if (yearly_average[5]<average[6]){
                    printf("Lake: %s is below the combined average of all lakes.\n", "St. Clair");
                } else{
                    printf("Lake: %s is above the combined average of all lakes.\n", "St. Clair");
                }
                
                yearly_average[j-2];
        
                while(yearly_average[i]<yearly_average[6]);
                // the following if statements detemine the coldest lakes and warmest lakes
                if (yearly_average[1]>yearly_average[0]&&yearly_average[2]>yearly_average[0]&&yearly_average[3]>yearly_average[0]&&yearly_average[4]>yearly_average[0]&&yearly_average[5]>yearly_average[0]){
                    printf("\nColdest lake: %s", "Superior");} 
                    else if(yearly_average[0]>yearly_average[1]&&yearly_average[0]>yearly_average[2]&&yearly_average[0]>yearly_average[3]&&yearly_average[0]>yearly_average[4]&&yearly_average[0]>yearly_average[5]){
                        printf("\nWarmest lake: %s", "Superior");
                    } 
                    
                    if (yearly_average[1]<yearly_average[2]&&yearly_average[1]<yearly_average[3]&&yearly_average[1]<yearly_average[4]&&yearly_average[1]<yearly_average[5]){
                        printf("\nColdest lake: %s", "Michigan");}
                        else if(yearly_average[1]>yearly_average[2]&&yearly_average[1]>yearly_average[3]&&yearly_average[1]>yearly_average[4]&&yearly_average[1]>yearly_average[5]){
                            printf("\nWarmest lake: %s", "Michigan\n");
                        }
                        
                        if (yearly_average[2]>yearly_average[3]&&yearly_average[2]>yearly_average[4]&&yearly_average[2]>yearly_average[5]){
                            printf("\nColdest lake: %s", "Huron");}
                            else if(yearly_average[2]>yearly_average[3]&&yearly_average[2]>yearly_average[4]&&yearly_average[2]>yearly_average[5]){
                                 printf("\nWarmest lake: %s", "Huron\n");
                            }
                            
                            if (yearly_average[3]<yearly_average[4]&&yearly_average[3]<yearly_average[5]){
                                printf("\nColdest lake: %s", "Erie");}
                                else if(yearly_average[3]>yearly_average[4]&&yearly_average[3]>yearly_average[5]){
                                    printf("\nWarmest lake: %s", "Erie\n");}
                                    
                                    if(yearly_average[4]>yearly_average[5]){
                                        printf("\nColdest lake: %s", "Ontario");}
                                        else if(yearly_average[4]>yearly_average[5]){
                                             printf("\nWarmest lake: %s", "Ontario\n");}
                                    
                                             if(yearly_average[5]<yearly_average[5]){
                                                 printf("\nColdest lake: %s", "St.Clair");}
                                                 else if(yearly_average[5]>yearly_average[5]){
                                                     printf("\nWarmest lake: %s", "St.Clair\n");
                                                 }
                }
                {
                //Question 3
                printf("\nQuestion 3:");
                
                //warmest
                double warmest_superior = lakes [0][2]; //value of the first number for each lake 
                int where; //location
                for (i = 0; i <= 366; ++i) { //starts at row 0 and adds one till it appraches 366
                    if (lakes [i][2] >= warmest_superior) { //if the inital value is greater than equal to the all the values in that column 
                        warmest_superior = lakes [i][2]; //it will replace that value 
                        where = i+1; //finds the date of the warmest_superior
                    }
                }
                int month; //follwing if statements is for all the months
                if (where >= 1 && where <= 31) {
                            month = 1; 
                        } else if (where > 31 && where <= 60) {
                            where = where - 31;
                            month = 2; 
                        } else if (where > 60 && where <= 91) {
                            where = where - 60;
                            month = 3;
                        } else if (where > 91 && where <= 121) {
                            where = where - 91;
                            month = 4;
                        } else if (where > 121 && where <= 152) {
                            where = where - 121;
                            month = 5;
                        } else if (where > 152 && where <= 182) {
                            where = where - 152; 
                            month = 6;
                        } else if (where > 182 && where <= 213) {
                            where = where - 182;
                            month = 7;
                        } else if (where > 213 && where <= 244) {
                            where = where - 213;
                            month = 8;
                        } else if (where > 244 && where <= 274) {
                            where = where - 244;
                            month = 9;
                        } else if (where > 274 && where <= 305) {
                            where = where - 274;
                            month = 10;
                        } else if (where > 305 && where <= 335) {
                            where = where - 305;
                            month = 11;
                        } else {
                            where = where - 335;
                            month = 12;
                        }
                
                double warmest_michigan = lakes [0][3];
                int where_2;
                for (i = 0; i <= 366; ++i) {
                    if (lakes [i][3] >= warmest_michigan) {
                        warmest_michigan = lakes [i][3];
                        where_2 = i+1;
                    }
                }
                int month_2;
                if (where_2 >= 1 && where_2 <= 31) {
                            month_2 = 1;
                        } else if (where_2 > 31 && where_2 <= 60) {
                            where_2 = where_2 - 31;
                            month_2 = 2;
                        } else if (where_2 > 60 && where_2 <= 91) {
                            where_2 = where_2 - 60;
                            month_2 = 3;
                        } else if (where_2 > 91 && where_2 <= 121) {
                            where_2 = where_2 - 91;
                            month_2 = 4;
                        } else if (where_2 > 121 && where_2 <= 152) {
                            where_2 = where_2 - 121;
                            month_2 = 5;
                        } else if (where_2 > 152 && where_2 <= 182) {
                            where_2 = where_2 - 152; 
                            month_2 = 6;
                        } else if (where_2 > 182 && where_2 <= 213) {
                            where_2 = where_2 - 182;
                            month_2 = 7;
                        } else if (where_2 > 213 && where_2 <= 244) {
                            where_2 = where_2 - 213;
                            month_2 = 8;
                        } else if (where_2 > 244 && where_2 <= 274) {
                            where_2 = where_2 - 244;
                            month_2 = 9;
                        } else if (where_2 > 274 && where_2 <= 305) {
                            where_2 = where_2 - 274;
                            month_2 = 10;
                        } else if (where_2 > 305 && where_2 <= 335) {
                            where_2 = where_2 - 305;
                            month_2 = 11;
                        } else {
                            where_2 = where_2 - 335;
                            month_2 = 12;
                        }
                
                double warmest_huron = lakes [0][4];
                int where_3;
                for (i = 0; i <= 366; ++i) {
                    if (lakes [i][4] >= warmest_huron) {
                        warmest_huron = lakes [i][4];
                        where_3 = i+1;
                    }
                }
                int month_3;
                if (where_3 >= 1 && where_3 <= 31) {
                            month_3 = 1;
                        } else if (where_3 > 31 && where_3 <= 60) {
                            where_3 = where_3 - 31;
                            month_3 = 2;
                        } else if (where_3 > 60 && where_3 <= 91) {
                            where_3 = where_3 - 60;
                            month_3 = 3;
                        } else if (where_3 > 91 && where_3 <= 121) {
                            where_3 = where_3 - 91;
                            month_3 = 4;
                        } else if (where_3 > 121 && where_3 <= 152) {
                            where_3 = where_3 - 121;
                            month_3 = 5;
                        } else if (where_3 > 152 && where_3 <= 182) {
                            where_3 = where_3 - 152; 
                            month_3 = 6;
                        } else if (where_3 > 182 && where_3 <= 213) {
                            where_3 = where_3 - 182;
                            month_3 = 7;
                        } else if (where_3 > 213 && where_3 <= 244) {
                            where_3 = where_3 - 213;
                            month_3 = 8;
                        } else if (where_3 > 244 && where_3 <= 274) {
                            where_3 = where_3 - 244;
                            month_3 = 9;
                        } else if (where_3 > 274 && where_3 <= 305) {
                            where_3 = where_3 - 274;
                            month_3 = 10;
                        } else if (where_3 > 305 && where_3 <= 335) {
                            where_3 = where_3 - 305;
                            month_3 = 11;
                        } else {
                            where_3 = where_3 - 335;
                            month_3 = 12;
                        }
                
                double warmest_erie = lakes [0][5];
                int where_4;
                for (i = 0; i <= 366; ++i) {
                    if (lakes [i][5] >= warmest_erie) {
                        warmest_erie = lakes [i][5];
                        where_4 = i+1;
                    }
                }
                int month_4;
                if (where_4 >= 1 && where_4 <= 31) {
                            month_4 = 1;
                        } else if (where_4 > 31 && where_4 <= 60) {
                            where_4 = where_4 - 31;
                            month_4 = 2;
                        } else if (where_4 > 60 && where_4 <= 91) {
                            where_4 = where_4 - 60;
                            month_4 = 3;
                        } else if (where_4 > 91 && where_4 <= 121) {
                            where_4 = where_4 - 91;
                            month_4 = 4;
                        } else if (where_4 > 121 && where_4 <= 152) {
                            where_4 = where_4 - 121;
                            month_4 = 5;
                        } else if (where_4 > 152 && where_4 <= 182) {
                            where_4 = where_4 - 152; 
                            month_4 = 6;
                        } else if (where_4 > 182 && where_4 <= 213) {
                            where_4 = where_4 - 182;
                            month_4 = 7;
                        } else if (where_4 > 213 && where_4 <= 244) {
                            where_4 = where_4 - 213;
                            month_4 = 8;
                        } else if (where_4 > 244 && where_4 <= 274) {
                            where_4 = where_4 - 244;
                            month_4 = 9;
                        } else if (where_4 > 274 && where_4 <= 305) {
                            where_4 = where_4 - 274;
                            month_4 = 10;
                        } else if (where_4 > 305 && where_4 <= 335) {
                            where_4 = where_4 - 305;
                            month_4 = 11;
                        } else {
                            where_4 = where_4 - 335;
                            month_4 = 12;
                        }
                
                double warmest_LO = lakes [0][6];
                int where_5;
                for (i = 0; i <= 366; ++i) {
                    if (lakes [i][6] >= warmest_LO) {
                        warmest_LO = lakes [i][6];
                        where_5 = i+1;
                    }
                }
                int month_5;
                if (where_5 >= 1 && where_5 <= 31) {
                            month_2 = 1;
                        } else if (where_5 > 31 && where_5 <= 60) {
                            where_5 = where_5 - 31;
                            month_5 = 2;
                        } else if (where_5 > 60 && where_5 <= 91) {
                            where_5 = where_5 - 60;
                            month_5 = 3;
                        } else if (where_5 > 91 && where_5 <= 121) {
                            where_5 = where_5 - 91;
                            month_5 = 4;
                        } else if (where_5 > 121 && where_5 <= 152) {
                            where_5 = where_5 - 121;
                            month_5 = 5;
                        } else if (where_5 > 152 && where_5 <= 182) {
                            where_5 = where_5 - 152; 
                            month_5 = 6;
                        } else if (where_5 > 182 && where_5 <= 213) {
                            where_5 = where_5 - 182;
                            month_5 = 7;
                        } else if (where_5 > 213 && where_5 <= 244) {
                            where_5 = where_5 - 213;
                            month_5 = 8;
                        } else if (where_5 > 244 && where_5 <= 274) {
                            where_5 = where_5 - 244;
                            month_5 = 9;
                        } else if (where_5 > 274 && where_5 <= 305) {
                            where_5 = where_5 - 274;
                            month_5 = 10;
                        } else if (where_5 > 305 && where_5 <= 335) {
                            where_5 = where_5 - 305;
                            month_5 = 11;
                        } else {
                            where_5 = where_5 - 335;
                            month_5 = 12;
                        }
                
                double warmest_ST_C = lakes [0][7];
                int where_6;
                for (i = 0; i <= 366; ++i) {
                    if (lakes [i][7] >= warmest_ST_C) {
                        warmest_ST_C = lakes [i][7];
                        where_6 = i+1;
                    }
                }
                int month_6;
                if (where_6 >= 1 && where_6 <= 31) {
                            month_6 = 1;
                        } else if (where_6 > 31 && where_6 <= 60) {
                            where_6 = where_6 - 31;
                            month_6 = 2;
                        } else if (where_6 > 60 && where_6 <= 91) {
                            where_6 = where_6 - 60;
                            month_6 = 3;
                        } else if (where_6 > 91 && where_6 <= 121) {
                            where_6 = where_6 - 91;
                            month_6 = 4;
                        } else if (where_6 > 121 && where_6 <= 152) {
                            where_6 = where_6 - 121;
                            month_6 = 5;
                        } else if (where_6 > 152 && where_6 <= 182) {
                            where_6 = where_6 - 152; 
                            month_6 = 6;
                        } else if (where_6 > 182 && where_6 <= 213) {
                            where_6 = where_6 - 182;
                            month_6 = 7;
                        } else if (where_6 > 213 && where_6 <= 244) {
                            where_6 = where_6 - 213;
                            month_6 = 8;
                        } else if (where_6 > 244 && where_6 <= 274) {
                            where_6 = where_6 - 244;
                            month_6 = 9;
                        } else if (where_6 > 274 && where_6 <= 305) {
                            where_6 = where_6 - 274;
                            month_6 = 10;
                        } else if (where_6 > 305 && where_6 <= 335) {
                            where_6 = where_6 - 305;
                            month_6 = 11;
                        } else {
                            where_6 = where_6 - 335;
                            month_6 = 12;
                        }
                
                //coldest
                double coldest_superior = lakes [0][2]; //value of the first number for each lake 
                int where_7; //location
                for (i = 0; i < 366; i++) { //starts at row 0 and adds one till it appraches 366
                    if (lakes [i][2] < coldest_superior) { //if the inital value is less than to the all the values in that column 
                        coldest_superior = lakes [i][2]; //it will replace that value 
                        where_7 = i+1; //finds the date of the warmest_superior
                    }
                }
                int month_7; //follwing if statements is for all the months
                if (where_7 >= 1 && where_7 <= 31) {
                            month_7 = 1;
                        } else if (where_7 > 31 && where_7 <= 60) {
                            where_7 = where_7 - 31;
                            month_7 = 2;
                        } else if (where_7 > 60 && where_7 <= 91) {
                            where_7 = where_7 - 60;
                            month_7 = 3;
                        } else if (where_7 > 91 && where_7 <= 121) {
                            where_7 = where_7 - 91;
                            month_7 = 4;
                        } else if (where_7 > 121 && where_7 <= 152) {
                            where_7 = where_7 - 121;
                            month_7 = 5;
                        } else if (where_7 > 152 && where_7 <= 182) {
                            where_7 = where_7 - 152; 
                            month_7 = 6;
                        } else if (where_7 > 182 && where_7 <= 213) {
                            where_7 = where_7 - 182;
                            month_7 = 7;
                        } else if (where_7 > 213 && where_7 <= 244) {
                            where_7 = where_7 - 213;
                            month_7 = 8;
                        } else if (where_7 > 244 && where_7 <= 274) {
                            where_7 = where_7 - 244;
                            month_7 = 9;
                        } else if (where_7 > 274 && where_7 <= 305) {
                            where_7 = where_7 - 274;
                            month_7 = 10;
                        } else if (where_7 > 305 && where_7 <= 335) {
                            where_7 = where_7 - 305;
                            month_7 = 11;
                        } else {
                            where_7 = where_7 - 335;
                            month_7 = 12;
                        }
                
                double coldest_michigan = lakes [0][3];
                int where_8;
                for (i = 0; i < 366; ++i) {
                    if (lakes [i][3] < coldest_michigan) {
                        coldest_michigan = lakes [i][3];
                        where_8 = i+1;
                    }
                }
                int month_8;
                if (where_8 >= 1 && where_8 <= 31) {
                            month_8 = 1;
                        } else if (where_8 > 31 && where_8 <= 60) {
                            where_8 = where_8 - 31;
                            month_8 = 2;
                        } else if (where_8 > 60 && where_8 <= 91) {
                            where_8 = where_8 - 60;
                            month_8 = 3;
                        } else if (where_8 > 91 && where_8 <= 121) {
                            where_8 = where_8 - 91;
                            month_8 = 4;
                        } else if (where_8 > 121 && where_8 <= 152) {
                            where_8 = where_8 - 121;
                            month_8 = 5;
                        } else if (where_8 > 152 && where_8 <= 182) {
                            where_8 = where_8 - 152; 
                            month_8 = 6;
                        } else if (where_8 > 182 && where_8 <= 213) {
                            where_8 = where_8 - 182;
                            month_8 = 7;
                        } else if (where_8 > 213 && where_8 <= 244) {
                            where_8 = where_8 - 213;
                            month_8 = 8;
                        } else if (where_8 > 244 && where_8 <= 274) {
                            where_8 = where_8 - 244;
                            month_8 = 9;
                        } else if (where_8 > 274 && where_8 <= 305) {
                            where_8 = where_8 - 274;
                            month_8 = 10;
                        } else if (where_8 > 305 && where_8 <= 335) {
                            where_8 = where_8 - 305;
                            month_8 = 11;
                        } else {
                            where_8 = where_8 - 335;
                            month_8 = 12;
                        }
                
                double coldest_huron = lakes [0][4];
                int where_9;
                for (i = 0; i < 366; ++i) {
                    if (lakes [i][4] < coldest_huron) {
                        coldest_huron = lakes [i][4];
                        where_9 = i+1;
                    }
                }
                int month_9;
                if (where_9 >= 1 && where_9 <= 31) {
                            month_9 = 1;
                        } else if (where_9 > 31 && where_9 <= 60) {
                            where_9 = where_9 - 31;
                            month_9 = 2;
                        } else if (where_9 > 60 && where_9 <= 91) {
                            where_9 = where_9 - 60;
                            month_9 = 3;
                        } else if (where_9 > 91 && where_9 <= 121) {
                            where_9 = where_9 - 91;
                            month_9 = 4;
                        } else if (where_9 > 121 && where_9 <= 152) {
                            where_9 = where_9 - 121;
                            month_9 = 5;
                        } else if (where_9 > 152 && where_9 <= 182) {
                            where_9 = where_9 - 152; 
                            month_9 = 6;
                        } else if (where_9 > 182 && where_9 <= 213) {
                            where_9 = where_9 - 182;
                            month_9 = 7;
                        } else if (where_9 > 213 && where_9 <= 244) {
                            where_9 = where_9 - 213;
                            month_9 = 8;
                        } else if (where_9 > 244 && where_9 <= 274) {
                            where_9 = where_9 - 244;
                            month_9 = 9;
                        } else if (where_9 > 274 && where_9 <= 305) {
                            where_9 = where_9 - 274;
                            month_9 = 10;
                        } else if (where_9 > 305 && where_9 <= 335) {
                            where_9 = where_9 - 305;
                            month_9 = 11;
                        } else {
                            where_9 = where_9 - 335;
                            month_9 = 12;
                        }
                
                double coldest_erie = lakes [0][5];
                int where_10;
                for (i = 0; i < 366; ++i) {
                    if (lakes [i][5] < coldest_erie) {
                        coldest_erie = lakes [i][5];
                        where_10 = i+1;
                    }
                }
                int month_10;
                if (where_10 >= 1 && where_10 <= 31) {
                            month_10 = 1;
                        } else if (where_10 > 31 && where_10 <= 60) {
                            where_10 = where_10 - 31;
                            month_10 = 2;
                        } else if (where_10 > 60 && where_10 <= 91) {
                            where_10 = where_10 - 60;
                            month_10 = 3;
                        } else if (where_10 > 91 && where_10 <= 121) {
                            where_10 = where_10 - 91;
                            month_10 = 4;
                        } else if (where_10 > 121 && where_10 <= 152) {
                            where_10 = where_10 - 121;
                            month_10 = 5;
                        } else if (where_10 > 152 && where_10 <= 182) {
                            where_10 = where_10 - 152; 
                            month_10 = 6;
                        } else if (where_10 > 182 && where_10 <= 213) {
                            where_10 = where_10 - 182;
                            month_10 = 7;
                        } else if (where_10 > 213 && where_10 <= 244) {
                            where_10 = where_10 - 213;
                            month_10 = 8;
                        } else if (where_10 > 244 && where_10 <= 274) {
                            where_10 = where_10 - 244;
                            month_10 = 9;
                        } else if (where_10 > 274 && where_10 <= 305) {
                            where_10 = where_10 - 274;
                            month_10 = 10;
                        } else if (where_10 > 305 && where_10 <= 335) {
                            where_10 = where_10 - 305;
                            month_10 = 11;
                        } else {
                            where_10 = where_10 - 335;
                            month_10 = 12;
                        }
                
                double coldest_LO = lakes [0][6];
                int where_11;
                for (i = 0; i < 366; ++i) {
                    if (lakes [i][6] < coldest_LO) {
                        coldest_LO = lakes [i][6];
                        where_11 = i+1;
                    }
                }
                int month_11;
                if (where_11 >= 1 && where_11 <= 31) {
                            month_11 = 1;
                        } else if (where_11 > 31 && where_11 <= 60) {
                            where_11 = where_11 - 31;
                            month_11 = 2;
                        } else if (where_11 > 60 && where_11 <= 91) {
                            where_11 = where_11 - 60;
                            month_11 = 3;
                        } else if (where_11 > 91 && where_11 <= 121) {
                            where_11 = where_11 - 91;
                            month_11 = 4;
                        } else if (where_11 > 121 && where_11 <= 152) {
                            where_11 = where_11 - 121;
                            month_11 = 5;
                        } else if (where_11 > 152 && where_11 <= 182) {
                            where_11 = where_11 - 152; 
                            month_11 = 6;
                        } else if (where_11 > 182 && where_11 <= 213) {
                            where_11 = where_11 - 182;
                            month_11 = 7;
                        } else if (where_11 > 213 && where_11 <= 244) {
                            where_11 = where_11 - 213;
                            month_11 = 8;
                        } else if (where_11 > 244 && where_11 <= 274) {
                            where_11 = where_11 - 244;
                            month_11 = 9;
                        } else if (where_11 > 274 && where_11 <= 305) {
                            where_11 = where_11 - 274;
                            month_11 = 10;
                        } else if (where_11 > 305 && where_11 <= 335) {
                            where_11 = where_11 - 305;
                            month_11 = 11;
                        } else {
                            where_11 = where_11 - 335;
                            month_11 = 12;
                        }
                
                double coldest_ST_C = lakes [0][7];
                int where_12;
                for (i = 0; i < 366; ++i) {
                    if (lakes [i][7] < coldest_ST_C) {
                        coldest_ST_C = lakes [i][7];
                        where_12 = i+1;
                    }
                }
                int month_12;
                if (where_12 >= 1 && where_12 <= 31) {
                            month_12 = 1;
                        } else if (where_12 > 31 && where_12 <= 60) {
                            where_12 = where_12 - 31;
                            month_12 = 2;
                        } else if (where_12 > 60 && where_12 <= 91) {
                            where_12 = where_12 - 60;
                            month_12 = 3;
                        } else if (where_12 > 91 && where_12 <= 121) {
                            where_12 = where_12 - 91;
                            month_12 = 4;
                        } else if (where_12 > 121 && where_12 <= 152) {
                            where_12 = where_12 - 121;
                            month_12 = 5;
                        } else if (where_12 > 152 && where_12 <= 182) {
                            where_12 = where_12 - 152; 
                            month_12 = 6;
                        } else if (where_12 > 182 && where_12 <= 213) {
                            where_12 = where_12 - 182;
                            month_12 = 7;
                        } else if (where_12 > 213 && where_12 <= 244) {
                            where_12 = where_12 - 213;
                            month_12 = 8;
                        } else if (where_12 > 244 && where_12 <= 274) {
                            where_12 = where_12 - 244;
                            month_12 = 9;
                        } else if (where_12 > 274 && where_12 <= 305) {
                            where_12 = where_12 - 274;
                            month_12 = 10;
                        } else if (where_12 > 305 && where_12 <= 335) {
                            where_12 = where_12 - 305;
                            month_12 = 11;
                        } else {
                            where_12 = where_12 - 335;
                            month_12 = 12;
                        }
                        
                printf ("\n\n%s is the warmest during %d/%d at %lf \n", "Lake Superior", where, month, warmest_superior);
                printf ("%s is the warmest during %d/%d at %lf \n", "Lake Michigan", where_2, month_2, warmest_michigan);
                printf ("%s is the warmest during %d/%d at %lf \n", "Lake Huron", where_3, month_3, warmest_huron );
                printf ("%s is the warmest during %d/%d at %lf \n", "Lake Erie", where_4, month_4, warmest_erie);
                printf ("%s is the warmest during %d/%d at %lf \n", "Lake Ontario", where_5, month_5, warmest_LO);
                printf ("%s is the warmest during %d/%d at %lf  \n", "Lake St.Clair", where_6, month_6, warmest_ST_C);
    
                printf ("\n%s is the coldest during %d/%d at %lf \n", "Lake Superior",where_7, month_7, coldest_superior);
                printf ("%s is the coldest during %d/%d at %lf  \n", "Lake Michigan", where_8, month_8, coldest_michigan);
                printf ("%s is the coldest during %d/%d at %lf  \n", "Lake Huron", where_9, month_9, coldest_huron );
                printf ("%s is the coldest during %d/%d at %lf  \n", "Lake Erie", where_10, month_10, coldest_erie);
                printf ("%s is the coldest during %d/%d at %lf  \n", "Lake Ontario", where_11, month_11, coldest_LO);
                printf ("%s is the coldest during %d/%d at %lf  \n", "Lake St.Clair", where_12, month_12, coldest_ST_C);
        }
        
        {
            //Question 4
            
            printf("\nQuestion 4:\n");
            double warmest_lakes = lakes [0][2]; //the first value in lake Superior
            int where_13; //location of the number

            for (int j = 2; j < 8; j++) { //the lakes column starts at 2 and ends at 8
                for (i = 0; i <= 366; ++i) { // row starts at 0 and adds one till it appraches 366
                    if (lakes[i][j] >= warmest_lakes) { //if the values for all the lakes will compare with warmest_lakes and idenitfy the greatest value
                        warmest_lakes = lakes [i][j]; //once a new value is found it will be replaced 
                        where_13 = i+1; 
                    }
                }
            }
            int month_13; //follwing if statements is for all the months
            if (where_13 >= 1 && where_13 <= 31) {
                month_13 = 1;
            } else if (where_13 > 31 && where_13 <= 60) {
                where_13 = where_13 - 31;
                month_13 = 2;
            } else if (where_13 > 60 && where_13 <= 91) {
                where_13 = where_13 - 60;
                month_13 = 3;
            } else if (where_13 > 91 && where_13 <= 121) {
                where_13 = where_13 - 91;
                month_13 = 4;
            } else if (where_13 > 121 && where_13 <= 152) {
                where_13 = where_13 - 121;
                month_13 = 5;
            } else if (where_13 > 152 && where_13 <= 182) {
                where_13 = month_13 - 152; 
                month_13 = 6;
            } else if (where_13 > 182 && where_13 <= 213) {
                where_13 = where_13 - 182;
                month_13 = 7;
            } else if (where_13 > 213 && where_13 <= 244) {
                where_13 = where_13 - 213;
                month_13 = 8;
            } else if (where_13 > 244 && where_13 <= 274) {
                where_13 = where_13 - 244;
                month_13 = 9;
            } else if (where_13 > 274 && where_13 <= 305) {
                where_13 = where_13 - 274;
                month_13 = 10;
            } else if (where_13 > 305 && where_13 <= 335) {
                where_13 = where_13 - 305;
                month_13 = 11;
            } else {
                where_13 = where_13 - 335;
                month_13 = 12;
            }
            
            
            double coldest_lakes = lakes [0][2]; //the first value in lake Superior
            int where_14; //location of the number

            for (int j = 2; j < 8; j++) { //the lakes column starts at 2 and ends at 8
                for (i = 0; i < 366; ++i) { // row starts at 0 and adds one till it appraches 366
                    if (lakes[i][j] < coldest_lakes) { //if the values for all the lakes will compare with warmest_lakes and idenitfy the smallest value
                        coldest_lakes = lakes [i][j]; //once a new value is found it will be replaced 
                        where_14 = i+1;
                    }
                }
            }
            int month_14; //follwing if statements is for all the months
            if (where_14 >= 1 && where_14 <= 31) {
                month_14 = 1;
            } else if (where_14 > 31 && where_14 <= 60) {
                where_14 = where_14 - 31;
                month_14 = 2;
            } else if (where_14 > 60 && where_14 <= 91) {
                where_14 = where_14 - 60;
                month_14 = 3;
            } else if (where_14 > 91 && where_14 <= 121) {
                where_14 = where_14 - 91;
                month_14 = 4;
            } else if (where_14 > 121 && where_14 <= 152) {
                where_14 = where_14 - 121;
                month_14 = 5;
            } else if (where_14 > 152 && where_14 <= 182) {
                where_14 = where_14 - 152; 
                month_14 = 6;
            } else if (where_14 > 182 && where_14 <= 213) {
                where_14 = where_14 - 182;
                month_14 = 7;
            } else if (where_14 > 213 && where_14 <= 244) {
                where_14 = where_14 - 213;
                month_14 = 8;
            } else if (where_14 > 244 && where_14 <= 274) {
                where_14 = where_14 - 244;
                month_14 = 9;
            } else if (where_14 > 274 && where_14 <= 305) {
                where_14 = where_14 - 274;
                month_14 = 10;
            } else if (where_14 > 305 && where_14 <= 335) {
                where_14 = where_14 - 305;
                month_14 = 11;
            } else {
                where_14 = where_14 - 335;
                month_14 = 12;
            }
            
            printf("\n");
            //this will determine which is the warmest lake temeperature and print the results found above with the date
            if(yearly_average[0] > yearly_average[1] && yearly_average[0] > yearly_average[2] && yearly_average[0] > yearly_average[3] && yearly_average[0] > yearly_average[4] && yearly_average[0] > yearly_average[5]) {
                printf ("%s warmest during %d/%d at %lf \n","Lake Superior", where_13, month_13, warmest_lakes);
                
            } else if(yearly_average[1] > yearly_average[2] && yearly_average[1] > yearly_average[3] && yearly_average[1] > yearly_average[4] && yearly_average[1] > yearly_average[5]) {
                printf ("%s is the warmest during %d/%d: %lf \n","Lake Michigan", where_13, month_13, warmest_lakes);
                
            } else if(yearly_average[2] > yearly_average[3] && yearly_average[2] > yearly_average[4] && yearly_average[2] > yearly_average[5]) {
                printf ("%s is the warmest during %d/%d: %lf \n","Lake Huron", where_13, month_13, warmest_lakes);
                
            } else if(yearly_average[3] > yearly_average[4] && yearly_average[3] > yearly_average[5]) {
                printf ("%s is the warmest during %d/%d: %lf \n","Lake Erie", where_13, month_13, warmest_lakes);
                
            } else if(yearly_average[4] > yearly_average[5]) {
                printf ("%s is the warmest during %d/%d: %lf \n","Lake Ontario", where_13, month_13, warmest_lakes);
                
            } else {
                printf ("%s is the warmest during %d/%d: %lf \n","Lake St.Clair", where_13, month_13, warmest_lakes);
            }
            
            //this will determine which is the coldest lake temeperature and print the results found above with the date
            if(yearly_average[0] < yearly_average[1] && yearly_average[0] < yearly_average[2] && yearly_average[0] < yearly_average[3] && yearly_average[0] < yearly_average[4] && yearly_average[0] < yearly_average[5]) {
                printf ("%s is the coldest during %d/%d: %lf \n", "Lake Superior", where_14, month_14, coldest_lakes);
                
            } else if(yearly_average[1] < yearly_average[2] && yearly_average[1] < yearly_average[3] && yearly_average[1] < yearly_average[4] && yearly_average[1] < yearly_average[5]) {
                printf ("%s is the coldest during %d/%d: %lf \n", "Lake Michigan", where_14, month_14, coldest_lakes);
                
            } else if(yearly_average[2] < yearly_average[3] && yearly_average[2] < yearly_average[4] && yearly_average[2] < yearly_average[5]) {
                printf ("%s is the coldest during %d/%d: %lf \n", "Lake Huron", where_14, month_14, coldest_lakes);
                
            } else if(yearly_average[3] < yearly_average[4] && yearly_average[3] < yearly_average[5]) {
                printf ("%s is the coldest during %d/%d: %lf \n", "Lake Erie", where_14, month_14, coldest_lakes);
                
            } else if(yearly_average[4] < yearly_average[5]) {
                printf ("%s is the coldest during %d/%d: %lf \n", "Lake Ontario", where_14, month_14, coldest_lakes);
                
            } else {
                printf ("%s is the coldest during %d/%d: %lf \n", "Lake St.Clair", where_14, month_14, coldest_lakes);
            }
            
        }
        {
            //Question 5
            printf("\nQuestion 5:\n");
            
            //this funtion is used sort it an decending_order for all the summer_averages
            void decending_order (double summer_average[ ], char lakes_name[8][20])
            { 
                int i; int j; char a[30]; 
                
                for(i = 0; i < 6; i++)
                {                         
                    for(j = 0; j < 6 - i - 1; j++)
                    {
                        if (summer_average[j] < summer_average[j + 1]){
                            double temp = summer_average[j];
                            summer_average[j] = summer_average[j + 1];    
                            summer_average[j + 1] = temp;
                            
                            strcpy (a, lakes_name[j]);                 
                            strcpy (lakes_name[j], lakes_name[j + 1]);
                            strcpy (lakes_name[j + 1], a);
                        }
                        
                    }
                    
                }
                
            }
    
            double summer_average[6]; //all the 6 lakes
            
            for (int j = 2; j < 8; j++) //lake starts at column 2 and adds one each time till it reaches 8 
            {
                double summer_column = 0; 
                for (int i = 171; i < 264; i++) { //summer values that were given
                    summer_column = summer_column + lakes[i][j];
                    summer_average [j-2] = summer_column/93; //divides the averages by 93 because it the total amount of days in summmer
                    fscanf (data, "%s", &lakenames[0][20]);  
                }
            }
            for (int k = 1; k < 7; k++)
            {
                decending_order (summer_average, lakenames); //puts in an decending_order
                printf("\n");
                printf("For Lake %s the average: %lf", lakenames[k-1], summer_average[k-1]);
            }
        }
        
        {
            //Question 6
            printf("\n\nQuestion 6:\n");
            
            
        }
        
        {
            //Question 7
            printf("\nQuestion 7:\n");
        }
        
        {
            //Question 8
            printf("\nQuestion 8:\n");
        }
        
    }
    {
            //Question 9
            printf("\nQuestion 9:\n");
    }
    return 0;
}