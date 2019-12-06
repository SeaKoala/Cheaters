//
// Created by SeaKoala on 12/4/2019.
//

#ifndef CHEATERS_FILE_H
#define CHEATERS_FILE_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;


class file {
public:
    file(string name) {
        fName = name;
        wordCount = setWordCount();
    }

    void setName(string name){
        fName = name;
    }

    string getName() const {
        return fName;
    }

    int setWordCount() {
        int count =0;
        fstream file;
        string word;
        file.open(fName.c_str());
        if(file.is_open()) {
            while (file >> word) {
                count++;
            }
            return count;
        }
        else
            return -1;
    }

    int getWordCount() {
        return this->wordCount;
    }

//    int printChunks() {
//        for(int i =0; i<chunks.size(); i++){
//            cout<<chunks[i]<<endl;
//        }
//        return 0;
//    }

//    int getChunkCount() {
//        return chunks.size();
//    }

    string parse(int n, int start)
    {
        int count =0;
        fstream file;
        string phrase, word;
        file.open(this->fName.c_str());
        if(file.is_open()) {
            while (file >> word) {
                if (start > count) {
                    count++;
                    continue;
                }
                phrase += word;
                count++;
                if ((count - start) % n == 0) {
                    transform(phrase.begin(), phrase.end(), phrase.begin(), ::toupper);
                    for (int i = 0; i < phrase.size(); i++) {
                        if (phrase[i] < 'A' || phrase[i] > 'Z') {
                            phrase.erase(phrase.begin() + i);
                        }
                    }
                    return phrase;
                }
            }
        }
        else{
            return "FAIL TO PARSE\n";
        }
    }

    vector <int> copyCounts;
    vector <string> sources;

private:
    string fName;
    int wordCount;

//    vector <string> chunks;
};

#endif //CHEATERS_FILE_H
