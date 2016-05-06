class VarComposite : public BaseCommand
{
		private:
	    int PID;
	    vector<BaseCommand*> CMContainer;

		public:
		VarComposite();
		~VarComposite();
		void add(string command);
		void ANDhandler(string command);
		void ORhandler(string command);

};


class Executable : public BaseCommand
{
		private:
		string command;
		string token;

		public:
		Executable();
		~Executable();
		void run(string command, string token);

};
