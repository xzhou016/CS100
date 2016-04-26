


class Mult:Base {
  Base* leftChild;
  Base* rightChild;
public:
  double evaluate(){
    return leftChild->evaluate() * rightChild->evaluate();
  }

};

class Div:Base{
  Base* leftChild;
  Base* rightChild;
public:
  double evaluate(){
    return leftChild->evaluate() / rightChild->evaluate();
  }
};

class Add:Base{
  Base* leftChild;
  Base* rightChild;
public:
  double evaluate(){
    return leftChild->evaluate() + rightChild->evaluate();
  }
};

class Sub:Base{
  Base* leftChild;
  Base* rightChild;
public:
  double evaluate(){
    return leftChild->evaluate() - rightChild->evaluate();
  }
};

class Sqr:Base{
  Base* child;
public:
  double evaluate(){
    return child->evaluate() * child->evaluate();
  }
};
