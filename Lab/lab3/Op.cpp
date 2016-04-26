
class Op: Base {
  double value;

public:
  Op(double v){
    value = v;
  }
  double evaluate() {
    return value;
  }

};
