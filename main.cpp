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
#include "hashEntry.h"

using namespace std;

int getdir (string dir, vector<string> &files);
int parse(string filename, int n, int start);
int getWordCount(string filename);


int main(int argc, char *argv[]) {
    int n = 5;
    int tableSize = 4999;
    int hashIndex = 0;
    long key =0;


    vector<hashEntry> table[tableSize];
    int totalChunks =0;
    string dir = string("med_doc_set");
    vector<string> paths = vector<string>();
    getdir(dir,paths);
    vector <file> files;
    for (unsigned int i = 2;i < paths.size();i++) {
        files.push_back(paths[i]);
    }
    for(int i=2; i< files.size(); i++){
        cout<<files[i].getName()<<endl;
            for (int k = 0; k < files[i].getWordCount() - n + 1; k++) {
                string phrase=files[i].parse(n, k);
                for(int x=0; x<phrase.size(); x++){
                    key+=phrase[x];
                }
                key=key*phrase.size();
                hashIndex = (key) % tableSize;
                table[hashIndex].push_back(hashEntry(phrase, paths[i], key));
                key =0;
            }
    }


    for(int i=0; i< tableSize; i++){
        for(int j=0; j< table[i].size(); j++){
            for(int k=j+1; k<table[i].size(); k++){
                if(table[i].at(j).chunk == table[i].at(k).chunk){
                    cout<< table[i].at(j).chunk << "=="<< table[i].at(k).chunk << "-----" << table[i].at(j).fileName << "=="<< table[i].at(k).fileName<<endl;
                }
            }
        }
        cout<<"+++\n";
    }

//    for(int i=0; i< tableSize; i++){
//        for(int k=0; k< table[i].size(); k++){
//            cout<< table[i].at(k).chunk<<"--"<<table[i].at(k).key<<"--"<<table[i].at(k).fileName<<endl;
//        }
//        cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++\n";
//    }
    return 0;
}














int getdir (string dir, vector<string> &files){
    DIR *dp;
    string path = dir + "\\";
    struct dirent *dirp;
    if((dp  = opendir(dir.c_str())) == NULL) {
        cout << "Error(" << errno << ") opening " << dir << endl;
        return errno;
    }

    while ((dirp = readdir(dp)) != NULL) {
        files.push_back(string(path+dirp->d_name));
    }
    closedir(dp);
    return 0;
}


//    strcpy(fName, argv[1]);
//    const int n  = atoi(argv[2]); //set to a smaller number for debugging
//    printf("%d\n", n);


