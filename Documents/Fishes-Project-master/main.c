//
//  main.c
//  Fishes
//
//  Created by Jakub Duchniewicz on 05.11.2016.
//  Copyright © 2016 Jakub Duchniewicz. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPhaseMovement = false;
int fileCounter = 0;

/* TODO */
/*
 void placement(){
    scanf("%i %i", &x, &y);
    if (check_coordinates(x,y) && check_how_many_fishes(x,y) == 1 && !check_pengiun(x,y)){
        place_penguin(x,y);
    }
    
}

/void movement(){
    scanf("%i %i %i %i", &x1, &y1, &x2, &y2);  x1,y1 are coordinates of a penguin user wants to move, x2,y2 are target coordinates

    check_coordinates();
    check_pengiun();
    check_target_coordinates();
    check_valid_move();
    
}
 */

void write_file(){
    FILE *file;
    file = fopen("/temp/test.txt", "w");
    fprintf(file, "testing some shieeet\n");
    fputs("new test for fputs", file);
    fclose(file);
}

void read_file(){
    FILE *file;
    char buff[255];
    
    fileCounter = (char)fileCounter;
    file = fopen("/tmp/test.txt" + fileCounter, "r");
    
    fgets(buff, 255, (FILE*)file);
    printf("2: %s\n", buff );
    
    fgets(buff, 255, (FILE*)file);
    printf("3: %s\n", buff );
    fclose(file);
}

struct field //struct from which we create our board, contans nr of fishes and penguins on it -> single tile
{
    int fishes;
    int penguins;
};

int main(){
    /* declare structures and some variables */
    
    read_file();
    if (!isPhaseMovement){
        //placement();
    } else {
        //movement();
    }
    write_file();
    return 0;
    
}
