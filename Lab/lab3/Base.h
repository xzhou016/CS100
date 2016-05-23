class Iterator;

class Base{
  public:
    /* Constructors */
    Base() { };
    /* PureVirtualFunctions */
    virtual double evaluate() = 0;
	virtual void print() = 0;
	virtual Iterator* create_iterator() = 0;
	virtual Base* get_left() = 0;
	virtual Base* get_right() = 0;
	virtual void set_L_Null() = 0;
	virtual void set_R_Null() = 0;
};
