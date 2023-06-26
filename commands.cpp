#include <unistd.h>
#include <string.h>
#include <iostream>
#include <vector>
#include "commands.h"
#include "utils.cpp"

#if 0
#else
#define FUNC_ENTRY()
#define FUNC_EXIT()
#endif


// TODO: Add your implementation for classes in Commands.h
/** internal commands implementation**/

/*command No.1*/
void ChangeChprompt::execute() {
}

/*command No.2*/

void lsPrompt::execute()
{
}


/*command No.3*/
void ShowPidCommand::execute()
{
    cout<<"smash pid is "<<getpid()<<"\n";
}

/*command No.5*/

void ChangeDirCommand::execute()
{

}

/*command No.7*/
void KillCommand::execute()
{

}

/*command No.8*/
void ForegroundCommand::execute() {

}

/*command No.9*/
void BackgroundCommand::execute()
{

}


/*command No.10*/
void QuitCommand::execute()
{
}

/*Bonus Command $$$*/
void cpCommand::execute() {

}




void ExternalCommand::execute() {

}



void PipeCommand:: execute() {
}

void RedirectionCommand ::execute() {
}


void Timeout::execute()
{
}

/**
* Creates and returns a pointer to Command class which matches the given command line (cmd_line)
*/
Command * SmallShell::CreateCommand(const char* cmd_line) {

}


void SmallShell::executeCommand(const char *cmd_line) {
    Command* cmd = CreateCommand(cmd_line);
    if(cmd) cmd->execute();
    delete cmd;
}
