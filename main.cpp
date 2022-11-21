#include <iostream>
#include "string.h"
#include "TTPMan.h"

using std::cout;
using std::cerr;
using std::cin;
using std::endl;

void usage() {
    cerr << "Usage: TTPMan [-s | --status] [-m <mode> | --mode <mode>]" << endl;
    exit(1);
}

void help() {
    cout << "TTPMan - Throttle Thermal Policy Manager" << endl;
    cout << "Usage: TTPMan [-s | --status] [-m <mode> | --mode <mode>]" << endl;
}

int main(int argc, char** argv) {
    auto* ttpMan = new TTPMan();
    if (argc == 1) {
        usage();
    } else if (argc == 2 && (strcmp(argv[1], "-h") == 0) | strcmp(argv[1], "--help") == 0) {
        help();
    } else {
        usage();
    }
    return 0;
}
