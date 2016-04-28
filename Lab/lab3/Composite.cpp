


class Mult: Public Base {
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

class Div: Public Base{
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

class Add: Public Base{
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

class Sub: Public Base{
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

class Sqr: Public Base{
  Base* child;
public:
  Spr(Base* childptr)
  : child(childptr)
  { };
  virtual double evaluate(){
    return child->evaluate() * child->evaluate();
  }
};
