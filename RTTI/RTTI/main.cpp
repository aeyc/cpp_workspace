//
//  main.cpp
//  RTTI
//
//  Created by Ayca Begum Tascioglu on 4.11.2020.
//

#include <iostream>
#include <string>
struct A {virtual ~A(){}};
struct B: A {int x = 7;};
struct C: A {float y = 10;};
/*
int main(int argc, const char * argv[]) {
    // insert code here...
    A* p1 = new B();
    B* p2 = dynamic_cast<B*>(p1);
    if (p2)
        std::cout << p2->x<<std::endl; //prints 7

    
    A* p11 = new C{};
    B* p21 = static_cast<B*>(p11);
    if (p21)
        std::cout << p21->x<<std::endl; //prints 1092616192
    
    
    int i = 1;
    //int* p = static_cast<int*>(i);//cannot cast int to pointer *int
    int* p = reinterpret_cast<int*>(i);
    //if (p)
        //std::cout << *p<<std::endl; //runtime error
    return 0;
}
*/
