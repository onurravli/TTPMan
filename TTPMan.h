//
// Created by onur on 11/21/22.
//

#ifndef TTPMAN_TTPMAN_H
#define TTPMAN_TTPMAN_H

#include <cstdlib>

class TTPMan {
private:
    std::string status;
public:
    TTPMan() {
        this->status = "silent"; // for default.
    }
    std::string get_status();
    void set_status(int status_code);
};


#endif //TTPMAN_TTPMAN_H
