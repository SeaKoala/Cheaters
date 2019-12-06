//
// Created by SeaKoala on 12/5/2019.
//

#ifndef CHEATERS_HASHENTRY_H
#define CHEATERS_HASHENTRY_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;


class hashEntry {
public:
    hashEntry(string gChuck, string gFileName, long key){
        this->chunk = gChuck;
        this->fileName = gFileName;
        this->key = key;
    }

    string chunk;
    string fileName;
    long key;

};
#endif //CHEATERS_HASHENTRY_H
