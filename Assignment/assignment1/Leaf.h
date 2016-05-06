class Bin : public Executable
{
		private:
	    string command;
        string token;


		public:
		Bin();
		~Bin();
		void run(string command, string token);

};

class NotBin : public Executable
{
		private:
        string command;
		string token;

		public:
		NotBin();
		~NotBin();
		void run(string command, string token);

};

class Comment : public Executable
{
		private:
        string command;
		string token;

		public:
		Comment();
		~Comment();
		void run(string command, string token);

};


