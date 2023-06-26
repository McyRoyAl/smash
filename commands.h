#ifndef SMASH_COMMAND_H_
#define SMASH_COMMAND_H_
#include <vector>
#include <string.h>
#include <dirent.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <iostream>
#include <list>
using std::string;
using  std::cout;

#define COMMAND_ARGS_MAX_LENGTH (200)
#define COMMAND_MAX_ARGS (20)
#define HISTORY_MAX_RECORDS (50)



extern pid_t foreground_pid;
extern bool is_running;

class Command {
protected:
    const char* cmd_line;
public:
    Command(const char* cmd_line): cmd_line(cmd_line){};
    virtual ~Command()= default;
    virtual void execute() = 0;
    //virtual void prepare();
    //virtual void cleanup();
    // TODO: Add your extra methods if needed
};

class BuiltInCommand : public Command {
public:
    BuiltInCommand(const char* cmd_line):Command(cmd_line){};
    virtual ~BuiltInCommand() = default;
};



//extern JobsList::JobEntry myjob;

extern std::vector <JobsList::JobEntry>* job;
extern JobsList::JobEntry current_job;

/*command No.1*/

class ChangeChprompt: public BuiltInCommand{
};

/*command No.2*/

class lsPrompt: public BuiltInCommand{
};

/*command No.3*/
class ShowPidCommand : public BuiltInCommand {
};

/*command No.4 - pwd command */

class GetCurrDirCommand : public BuiltInCommand {
};

/*command No.5*/

class ChangeDirCommand : public BuiltInCommand {
};

/*command No.6*/
class JobsCommand : public BuiltInCommand {
};

/*command No.7*/
class KillCommand : public BuiltInCommand {

};
/*command No.8*/
class ForegroundCommand : public BuiltInCommand {

};

/*command No.9*/

class BackgroundCommand : public BuiltInCommand {

};

/*command No.10*/
class JobsList;

class QuitCommand : public BuiltInCommand {

};

/*Bonus Command*/
class JobsList;

class cpCommand : public BuiltInCommand {

};





/** External Command**/


class ExternalCommand : public Command {

};
/** Redirection Command**/

class RedirectionCommand : public Command {

};



class PipeCommand : public Command {

};


class Timeout: public Command
{

public:

    Timeout(const char* cmd_line):Command(cmd_line){};
    virtual ~Timeout(){};
    void execute() override;

};


#endif //SMASH_COMMAND_H_
