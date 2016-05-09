#include <cmath>

//typename <input IT>
class Ceil: public Base{
    private: 
    Base* child;
    double prDouble;
    public:
    Ceil(Base* inputChild){
        child = inputChild;
    };
    Ceil(double inputDouble){
        prDouble = inputDouble;
    };
    
    virtual double evaluate(){
        return ceil(child->evaluate());
    };
    
};

class Floor: public Base{
    private: 
    Base* child;
    double prDouble;
    public:
    Floor(Base* inputChild){
        child = inputChild;
    };
    
    double evaluate(){
        return floor(child->evaluate());
    }
    
};

class Abs: public Base{
    private: 
    Base* child;
    double prDouble;
    
    public:
    Abs(Base* inputChild){
        child = inputChild;
    }
    Abs(double inputDouble){
        prDouble = inputDouble;
    }
    
    double evaluate(){
        return sqrt(child->evaluate() * child->evaluate());
    }
    
    
};