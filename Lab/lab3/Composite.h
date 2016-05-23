

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
  Base* get_left() {return leftChild;};
  Base* get_right() {return rightChild;};
  void set_L_Null() {leftChild = NULL;};
  void set_R_Null() {rightChild = NULL;};
  Iterator* create_iterator() {return new OperatorIterator(this);};
  void print() {cout << "*";};
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


  void set_L_Null() {leftChild = NULL;};
  void set_R_Null() {rightChild = NULL;};
  Base* get_left() {return leftChild;};
  Base* get_right() {return rightChild;};
  Iterator* create_iterator() {return new OperatorIterator(this);};
  void print() {cout << "/";};
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
  
  void set_L_Null() {leftChild = NULL;};
  void set_R_Null() {rightChild = NULL;};
  Base* get_left() {return leftChild;};
  Base* get_right() {return rightChild;};
  Iterator* create_iterator() {return new OperatorIterator(this);};
  void print() {cout << "+";};
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

  void set_L_Null() {leftChild = NULL;};
  void set_R_Null() {rightChild = NULL;};
  Base* get_left() {return leftChild;};
  Base* get_right() {return rightChild;};
  Iterator* create_iterator() {return new OperatorIterator(this);};
  void print() {cout << "-";};
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

  void set_L_Null() {child = NULL;};
  void set_R_Null() {};
  Base* get_left() {return child;};
  Base* get_right() {return NULL;};
  Iterator* create_iterator() {return new UnaryIterator(this);};
  void print() {cout << "^2";};
};

class Root : public Base
{
  private:
    Base* child;
  public:
    Root() {}; 
	Root(Base* root) {child = root;};

  void set_L_Null() {child = NULL;};
  void set_R_Null() {};
	Base* get_left() {return child;};
	Base* get_right() {return NULL;};
	void print() {cout << "ROOT";};
	double evaluate() { return this->child->evaluate(); };
	Iterator* create_iterator() { return new UnaryIterator(this);};
};
