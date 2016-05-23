class Visitor {
public:
    Visitor(){};
    ~Visitor(){};
    virtual void execute() = 0;
};

class PrintVisitor : public Visitor{
public:
    PrintVisitor(){};
    void rootNode(){};
    void sqrNode();
    void mulNode();
    void subNode();
    void addNode();
    void opNode(Op* op);

    void execute();
};
