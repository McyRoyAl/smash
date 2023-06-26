#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include "Commands.h"
#include "signals.h"
//
int main(int argc, char* argv[]) {

    externalSmash=&smash;
    while(is_running) {
        smash.get_chprompt();
        std::string cmd_line;
        std::getline(std::cin, cmd_line);
        smash.executeCommand(cmd_line.c_str());}
    return 0;
}