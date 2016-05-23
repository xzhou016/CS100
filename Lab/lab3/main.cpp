#include <iostream>
#include <vector>
#include <stack>
using namespace std;
#include "Base.h"
#include "Container.h"
#include "Container.cpp"
#include "Sort.h"
#include "Sort.cpp"
#include "Iterator.h"
#include "Iterator.cpp"
#include "Composite.h"
#include "Op.h"
#include "Visitor.h"
//#includenecessaryclasses


int main(){
  //Op* op7 = new Op(7);
  //Op* op4 = new Op(4);
  //Op* op3 = new Op(3);
  //Op* op2 = new Op(2);
  //Mult* A = new Mult(op7, op4);
  //Add* B = new Add(op3, A);
  //Sub* C = new Sub(B, op2);
  //Sqr* D = new Sqr(C);
	Op* op1 = new Op(1);
	Sqr* sq1 = new Sqr(op1);
	Op* op4 = new Op(4);
	Op* op2 = new Op(2);
	Mult* mult8 = new Mult(op4, op2);
	Add* add = new Add(sq1, mult8);
	Sqr* sqr = new Sqr(op2);
	Sub* sub = new Sub(add, sqr);
	Root* root = new Root(sub);
  //VectorContainer* container = new VectorContainer();
  //container->add_element(A);
  //container->add_element(B);
  //container->add_element(C);
  //container->add_element(D);
  //cout << "Container Before Sort : " << endl;
  //container->print();
  //cout << "Container After Sort : " << endl;
  //container->set_sort_function(new SelectionSort());
  //container->set_sort_function(new BubbleSort());
  //container->sort();
  //container->print();

	//OperatorIterator* opa = new OperatorIterator(add);
	//OperatorIterator* ops = new OperatorIterator(sub);
	//UnaryIterator* opsq = new UnaryIterator(sqr);
	//opa->current()->print();
	//ops->current()->print();
  	//opsq->current()->print();
  // //double test = 7/9
  // Div* E = new Div(A, B);
  // cout << "A / B  = " << E->evaluate() << endl;
  //
  // Ceil* myCeiling = new Ceil(E);
  // Floor* myFloor = new Floor(E);
  // Op* negOne = new Op(-1);
  // Abs* myAbs = new Abs(negOne);
  // cout << myCeiling->evaluate() << endl;
  // cout << myFloor->evaluate() << endl;
  // cout << myAbs->evaluate() << endl;

	cout <<  "--- PreOrder Iterator ---" << endl;
	PreOrderIterator* pre_itr = new PreOrderIterator(root);


	int limit = 0;


	for(pre_itr->first(); !pre_itr->is_done(); pre_itr->next())
	{
		if(pre_itr->current() != NULL)
		{
			pre_itr->current()->print();
			cout << endl;
			limit++;
		}
		if(limit == 10)
		{
				return 0;
		}
	}

	//lab 8
	for(pre_itr->first(); !pre_itr->is_done(); pre_itr->next())
	{
		if(pre_itr->current() != NULL)
		{
			pre_itr->current()->print();
			cout << endl;
			limit++;
		}
		if(limit == 10)
		{
				return 0;
		}
	}

  return 0;
}
