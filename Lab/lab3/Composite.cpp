


class Mult:Base {
  Base* leftChild;
  Base* rightChild;
public:
  virtual double evaluate(){
    return leftChild->evaluate() * rightChild->evaluate();
  }

};

class Div:Base{
  Base* leftChild;
  Base* rightChild;
public:
  virtual double evaluate(){
    return leftChild->evaluate() / rightChild->evaluate();
  }
};

class Add:Base{
  Base* leftChild;
  Base* rightChild;
public:
  virtual double evaluate(){
    return leftChild->evaluate() + rightChild->evaluate();
  }
};

class Sub:Base{
  Base* leftChild;
  Base* rightChild;
public:
  virtual double evaluate(){
    return leftChild->evaluate() - rightChild->evaluate();
  }
};

class Sqr:Base{
  Base* child;
public:
  virtual double evaluate(){
    return child->evaluate() * child->evaluate();
  }
};
