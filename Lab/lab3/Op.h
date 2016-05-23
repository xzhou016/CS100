
class Op: public Base {
  double value;

public:
  Op(double v){
    value = v;
  }
  double evaluate() {
    return value;
  }
  
  void set_L_Null() {};
  void set_R_Null() {};
  Base* get_left() {return NULL;};
  Base* get_right() {return NULL;};
  void print() { cout << value ;};
  Iterator* create_iterator() {return new NullIterator(this);};
};
