class Container;

class Sort{
  public:
  /* Constructors */
  Sort();
  /* Pure Virtual Functions */
  virtual void sort( Container* container) = 0;
};

class SelectionSort : public Sort
{
  public:
  SelectionSort();
  
  void sort(Container* container) {
    int i, j, min;
    double temp; 
    for (int i= 0; i < (container->size()); i++){
      min = i;
      
      for(int j = i + 1; j < container->size(); j++){
        if(container->at(i) < container->at(min))
          min = j;
      }
      
      if(container->at(i) != container->at(min))
        swap(i, min);
    }
  };

};


class BubbleSort : public Sort
{
  public:
  BubbleSort();
  
  void sort(Container* container);
};
