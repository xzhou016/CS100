

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
  
  void sort(Container* container)
  {
    Base* lowest = container->at(0);
    int lowest_index = 0;
    for(int i = 0; i < container->size(); i++)
    {
      lowest = container->at(i);
      lowest_index = i;
      for(int j = i+1; i < container->size()-1; j++)
      {
        if(container->at(j)->evaluate() < lowest->evaluate())
        {
            lowest = container->at(j);
            lowest_index = j;
        }
      }
      
      container->swap(i, lowest_index);
      
    }
  }

};




class BubbleSort : public Sort
{
  public:
  BubbleSort();
  
  void sort(Container* container)
  {
      bool did_swap = true;
      
      
    while(did_swap == true)
    {
      did_swap = false;
      for(int i = 1; i < container->size(); i++)
      {
        if(container->at(i) < container->at(i-1))
        {
          container->swap(i, i-1);
          did_swap = true;
        }
      }
      
    }
  }
};
