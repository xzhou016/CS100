#include "Sort.h"

void SelectionSort::sort(Container* container){
  int i, j, min;
  double temp;
  for (int i= 0; i < (container->size()); i++){
    min = i;

    for(int j = i + 1; j < container->size(); j++){
      if(container->at(i)->evaluate() < container->at(min)->evaluate())
        min = j;
    }

    if(container->at(i)->evaluate() <= container->at(min)->evaluate()){
      //cout << "Condition ok" << endl;
      container->swap(i, min);
    }

  }
}

void BubbleSort::sort(Container* container){
    bool did_swap = true;


    while(did_swap == true){
      did_swap = false;
      for(int i = 1; i < container->size(); i++){
        if(container->at(i) < container->at(i-1)){
          container->swap(i, i-1);
          did_swap = true;
        }
      }

    }
}
