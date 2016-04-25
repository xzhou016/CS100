classContainer{
protected:
  Sort*sort_function;
public:
  /*Constructors*/
  Container() : sort_function(NULL){};
  Container(Sort*function) : sort_function(function){};

  /*Non Virtual Functions*/
  voidset_sort_function(Sort*sort_function);//set the type of sorting algorithm
  /*Pure Virtual Functions*/
  //push the top pointer of the tree into container
  virtualvoidadd_element(Base*element)=0;
  //iterate through trees and output values
  virtualvoidprint()=0;
  //calls on the previously set sorting ­algorithm.
  //Checks if sort_function is not null,throw exception if otherwise
  virtualvoidsort()=0;
  /*Essentially the only functionsneededtosort*/
  //switchtreelocations
  virtualvoidswap(inti,intj)=0;
  //gettopptroftreeatindexi
  virtualBase*at(inti)=0;
  //returncontainersize
  virtualintsize()=0;
};
