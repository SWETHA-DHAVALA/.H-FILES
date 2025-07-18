#include "stack.h"
 int main(){
 	stack s;
 	s.push(10);
 	s.push(20);
 	s.push(30);
 	s.push(40);
 	s.push(50);
 	cout << "satck elements"<<endl ;
 	s.print();
 	cout << "poped element:";
 	s.pop();
 	cout << endl;
 	cout << "Top element: " << s.peek() << endl;
 }
