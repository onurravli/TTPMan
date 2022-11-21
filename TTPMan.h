//
// Created by onur on 11/21/22.
//

#ifndef TTPMAN_TTPMAN_H
#define TTPMAN_TTPMAN_H

#include <cstdlib>

class TTPMan {
private:
    char* status;
public:
    TTPMan() {
        status = (char*)malloc(sizeof(char)*255);
    }
    char* get_status();
};


#endif //TTPMAN_TTPMAN_H
