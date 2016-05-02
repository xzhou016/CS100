class Mult: public Base {
  Base* leftChild;
  Base* rightChild;
public:
  Mult(Base* left, Base* right)
  : leftChild(left), rightChild(right)
  { };
  virtual double evaluate(){
    return leftChild->evaluate() * rightChild->evaluate();
  }

};

class Div: public Base{
  Base* leftChild;
  Base* rightChild;
public:
  Div(Base* left, Base* right)
  : leftChild(left), rightChild(right)
  { };
  virtual double evaluate(){
    return leftChild->evaluate() / rightChild->evaluate();
  }
};

class Add: public Base{
  Base* leftChild;
  Base* rightChild;
public:
  Add(Base* left, Base* right)
  : leftChild(left), rightChild(right)
  { };
  virtual double evaluate(){
    return leftChild->evaluate() + rightChild->evaluate();
  }
};

class Sub: public Base{
  Base* leftChild;
  Base* rightChild;
public:
  Sub(Base* left, Base* right)
  : leftChild(left), rightChild(right)
  { };
  virtual double evaluate(){
    return leftChild->evaluate() - rightChild->evaluate();
  }
};

class Sqr: public Base{
  Base* child;
public:
  Sqr(Base* childptr)
  : child(childptr)
  { };
  virtual double evaluate(){
    return child->evaluate() * child->evaluate();
  }
};
