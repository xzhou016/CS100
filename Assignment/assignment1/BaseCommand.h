class BaseCommand
{
    private:
    string command_line;
    
    public:
    BaseCommand();
    ~BaseCommand();
    virtual void run(string command_line) = 0;
};