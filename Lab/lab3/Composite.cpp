


class Mult: Public Base {
  Base* leftChild;
  Base* rightChild;
public:
  virtual double evaluate(){
    return leftChild->evaluate() * rightChild->evaluate();
  }

};

class Div: Public Base{
  Base* leftChild;
  Base* rightChild;
public:
  virtual double evaluate(){
    return leftChild->evaluate() / rightChild->evaluate();
  }
};

class Add: Public Base{
  Base* leftChild;
  Base* rightChild;
public:
  virtual double evaluate(){
    return leftChild->evaluate() + rightChild->evaluate();
  }
};

class Sub: Public Base{
  Base* leftChild;
  Base* rightChild;
public:
  virtual double evaluate(){
    return leftChild->evaluate() - rightChild->evaluate();
  }
};

class Sqr: Public Base{
  Base* child;
public:
  virtual double evaluate(){
    return child->evaluate() * child->evaluate();
  }
};
