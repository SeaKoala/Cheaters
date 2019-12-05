#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <fstream>


using namespace std;

int parse(string filename, int n, int start);
int getWordCount(string filename);

int main(int argc, char *argv[]) {
    char fName[] = "catchmeifyoucan.txt";
//    strcpy(fName, argv[1]);
    printf("fileName: %s\n", fName);
//    const int n  = atoi(argv[2]); //set to a smaller number for debugging
//    printf("%d\n", n);
int wordCount = getWordCount(fName);
int n = 5;
    for(int i=0; i< wordCount-n+1; i++) {
        parse(fName, n, i);
    }
    return 0;
}


int parse(string filename, int n, int start)
{
    int count =0;
    fstream file;
    string phrase, word;
    file.open(filename.c_str());
        while (file >> word)
        {
            if(start> count){
                count++;
                continue;
            }
            phrase += word;
            count++;
            if((count-start)%n == 0){
                cout << phrase<<endl;
                break;
            }
        }
    return 0;
}

int getWordCount(string filename){
    int count =0;
    fstream file;
    string word;
    file.open(filename.c_str());
    while (file >> word) {
        count++;
    }
    return count;
}
