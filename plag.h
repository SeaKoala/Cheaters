//
// Created by SeaKoala on 12/6/2019.
//

#ifndef CHEATERS_PLAG_H
#define CHEATERS_PLAG_H
using namespace std;


class plag {
public:
    plag(string fileNames){
        this->fileNames = fileNames;
        copyCount = 0;
    }

    int copyCount;
    string fileNames;

};
#endif //CHEATERS_PLAG_H
