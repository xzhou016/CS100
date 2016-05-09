#ifndef __MENU_CLASS__
#define __MENU_CLASS__

#include <iostream>
#include "command.h"

using namespace std;

class Menu {
	private:
		int history_index;
		vector<Command*> history;

	public:
		Menu() {
			this->history_index = 0;//Base constructor to set up all necessary members
		};
		void execute() {
			if (this->history_index != 0) {
				cout << history.at(this->history_index - 1)->execute() << endl;//Prints the current commands value (based on history_index), if no commands exist
			}else
				cout << 0 << endl;//print 0 by default
		};
		bool initialized() {
			if(history_index == 0)
				return false;
			else
				return true;//Return true if the history has been primed with a single op instruciton
			//This is necessary because that is the base of a calculation
		};
		void add_command(Command* cmd) {
			history.push_back(cmd);//Adds a command to history in the appropriate posiiton (based on history_index)
		};
		Command* get_command() {
			return history.at(history_index);//Returns the command in history we are currently referring to (based on history_index)
		};
		void undo() {
			if(history_index != 0){
				history_index--;
				return; //Moves to the last command in history (if possible)
			}
		};
		void redo() {
			if(history_index != (history.size() - 1)){
				history_index++;
				return; //Moves to the next command in history (if possible)
			}
		};
};

#endif //__MENU_CLASS__
