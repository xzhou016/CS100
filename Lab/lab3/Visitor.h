class Visitor {
public:
    Visitor(){};
    ~Visitor(){};
    virtual void execute() = 0;
    virtual void rootNode();
    virtual void sqrNode();
    virtual void mulNode();
    virtual void subNode();
    virtual void addNode();
    virtual void opNode(Op* op);
};

class PrintVisitor : public Visitor{
public:
    PrintVisitor(){};
    void rootNode(){};
    void sqrNode(){};
    void mulNode(){};
    void subNode(){};
    void addNode(){};
    void opNode(Op* op){};

    void execute(){ cout << output << endl;};
private:
    string output;
};
