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
    void sqrNode(){output += "^";};
    void mulNode(){output += "*";};
    void subNode(){output += "-";};
    void addNode(){output += "+";};
    void opNode(Op* op){output.append(op->evaluate())};

    void execute(){ cout << output << endl;};
private:
    string output;
};
