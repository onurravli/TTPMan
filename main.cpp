#include <iostream>
#include "TTPMan.h"

using std::cout;
using std::cerr;
using std::cin;
using std::endl;

void usage() {
    cerr << "Usage: TTPMan [-s | --status] [-m <mode> | --mode <mode>]" << endl;
}

int main(int argc, char** argv) {
    auto* ttpMan = new TTPMan();
    if(argc == 0) {
        usage();
    } else {
        return 0;
    }
    return 0;
}
