#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <time.h>


int main(int argc, char *argv[]) {
    char fName[] = "";
    strcpy(fName, argv[1]);
    printf("fileName: %s\n", fName);
    const int n  = atoi(argv[2]); //set to a smaller number for debugging
    printf("%d\n", n);

    populateWorld(fName, world, &numRows, &numCols);

    return 0;
}


