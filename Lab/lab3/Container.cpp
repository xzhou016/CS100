#include "Container.h"
#include "Sort.h"


void VectorContainer::add_element (Base* element){
  myBox.push_back(element);
}


void VectorContainer::print() {
  for(int i = 0; i < myBox.size() ; i++){
    cout << myBox[i]->evaluate() << " ";
  }
  cout << endl;
}

void VectorContainer::sort(){
  try{
    if(sort_function == NULL)
      throw "NULL";
  }catch(string e){
    cout << "Sort function was " << e << endl;
  }
  sort_function->sort(this);
}

void VectorContainer::swap(int i, int j){
  Base* temp;
  temp = myBox[i];
  myBox[i] = myBox[j];
  myBox[j] = temp;
}

Base* VectorContainer::at(int i ){
  return myBox[i];
}

int VectorContainer::size(){
  return myBox.size();
}
