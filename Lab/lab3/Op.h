
class Op: public Base {
  double value;

public:
  Op(double v){
    value = v;
  }
  double evaluate() {
    return value;
  }

};
