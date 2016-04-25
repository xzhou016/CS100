#include<iostream>
//#includenecessaryclasses
using namespace std;
int main(){
  Op* op7 = newOp(7);
  Op* op4 = newOp(4);
  Op* op3 = newOp(3);
  Op* op2 = newOp(2);
  Mult* A = newMult(op7,op4);
  Add* B = newAdd(op3,A);
  Sub* C = newSub(B,op2);
  Sqr* D = newSqr(C);
  VectorContainer* container = newVectorContainer();
  container­ -> add_element(A);
  container­ -> add_element(B);
  container­ -> add_element(C);
  container­ -> add_element(D);
  cout<<"ContainerBeforeSort:" << endl;
  container­ -> print();
  cout << "ContainerAfterSort:" << endl;
  container -­> set_sort_function(newSelectionSort());
  container­ -> sort();
  container­ -> print();
};
