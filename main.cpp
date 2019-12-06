#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <fstream>
#include <vector>
#include <dirent.h>
#include "file.h"


using namespace std;

int getdir (string dir, vector<string> &files);
int parse(string filename, int n, int start);
int getWordCount(string filename);

int main(int argc, char *argv[]) {
    string dir = string("sm_doc_set");
    vector<string> files = vector<string>();
    getdir(dir,files);
//    for (unsigned int i = 2;i < files.size();i++) {
//
//    }
    string path = dir + "\\" + files[3];
    file f1 (path);
    cout << f1.getName() << f1.getWordCount()<<endl;
    int n = 5;
    for (int i = 0; i < f1.getWordCount() - n + 1; i++) {
        f1.parse(n, i);
    }
    f1.printChunks();
    return 0;
}


int getdir (string dir, vector<string> &files){
    DIR *dp;
    struct dirent *dirp;
    if((dp  = opendir(dir.c_str())) == NULL) {
        cout << "Error(" << errno << ") opening " << dir << endl;
        return errno;
    }

    while ((dirp = readdir(dp)) != NULL) {
        files.push_back(string(dirp->d_name));
    }
    closedir(dp);
    return 0;
}


//    strcpy(fName, argv[1]);
//    const int n  = atoi(argv[2]); //set to a smaller number for debugging
//    printf("%d\n", n);


