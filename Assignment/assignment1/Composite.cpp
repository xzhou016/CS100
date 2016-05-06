Executable::Executable()
{
		command = "";
		token = "";
}

Executable::~Executable()
{
		delete this;
}

void Executable::run(string command, string token) 
{

}



VarComposite::VarComposite()
{
		PID = 1;
}

VarComposite::~VarComposite()
{
		delete this;
}

void VarComposite::add(string command)
{

}

void VarComposite::ANDhandler(string command)
{

}

void VarComposite::ORhandler(string command)
{

}


