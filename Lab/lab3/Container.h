class Sort;

class Container{
  protected:
    Sort* sort_function;
  public:
    /*Constructors*/
    Container() : sort_function(NULL){};
    Container(Sort* function) : sort_function(function){};

    /* Non Virtual Functions */
    void set_sort_function(Sort* sf){
      sort_function = sf;
    };//set the type of sorting algorithm
    /* Pure Virtual Functions */
    //push the top pointer of the tree into container
    virtual void add_element( Base* element) = 0;
    //iterate through trees and output values
    virtual void print() = 0;
    //calls on the previously set sorting algorithm.
    //Checks if sort_function is not null,throw exception if otherwise
    virtual void sort() = 0;
    /*Essentially the only functionsneededtosort*/
    //switch tree locations
    virtual void swap(int i , int j) = 0;
    //get topptr of tree at index i
    virtual Base* at(int i)=0;
    //return container size
    virtual int size()=0;
};

class VectorContainer : public Container
{
  private: 
  vector<Base*> myBox;
  
  public:
  VectorContainer() {};
  ~VectorContainer() {};
  
  
  //Sort* sort_function();
  virtual void add_element( Base* element){
    myBox.push_back(element);
  };
  
  void print() {
    for(int i = 0; i < myBox.size() ; i++){
      cout << myBox[i]->evaluate() << " ";
    }
    cout << endl;
  };
  
  void sort() {
    try{
      if(sort_function == NULL)
        throw "NULL";
    }catch(string e){
      cout << "Sort function was " << e << endl;
    }
    //sort_function->sort(this);
  };
  
  void swap(int i, int j) {
    Base* temp;
    temp = myBox[i];
    myBox[i] = myBox[j];
    myBox[j] = temp;
  };
  
  Base* at(int i) {
    return myBox[i];
  };
  
  int size() {
    return myBox.size();
  };
};