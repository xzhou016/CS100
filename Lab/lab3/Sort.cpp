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
  
  void sort(Container* container);

};

void SelectionSort::sort(Container* container)
{
  
}


class BubbleSort : public Sort
{
  public:
  BubbleSort();
  
  void sort(Container* container);
};
