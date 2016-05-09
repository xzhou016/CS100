#ifndef __COMMAND_CLASS__
#define __COMMAND_CLASS__

#include "composite.h"

class Command {
	protected:
		Base* root;
	
	public:
		Command() { };
		double execute() {
			return root->evaluate();
		};
		Base* get_root() {
			return root;
		};
};

class OpCommand : public Command {
	//OpCommand Code Here
		public:
		OpCommand(double number)
		{
		   root = new Op(number);
		};


        
};

class AddCommand : public Command {
	//AddCommand Code Here
		public:
        AddCommand(Command* CmdPtr, double number)
		{
				root = new Add(CmdPtr->get_root(), new Op(number));
		};

};

class SubCommand : public Command {
	//SubCommand Code Here
	
		public:
        SubCommand(Command* CmdPtr, double number)
		{
				root = new Sub(CmdPtr->get_root(), new Op(number));
		};
};

class MultCommand : public Command {
	//MultCommand Code Here
	
		public:
        MultCommand(Command* CmdPtr, double number)
		{
				root = new Mult(CmdPtr->get_root(), new Op(number));
		};
};

class SqrCommand : public Command {
	//SqrCommand Code Here
	
		public:
        SqrCommand(Command* CmdPtr, double number)
		{
				root = new Sqr(CmdPtr->get_root());
		};
};

#endif //__COMMAND_CLASS__
