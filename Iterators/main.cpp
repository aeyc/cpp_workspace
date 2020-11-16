//
//  main.cpp
//  Iterators
//
//  Created by Ayca Begum Tascioglu on 16.11.2020.
//

#include <iostream>
#include <vector>
#include <algorithm>
int main(int argc, const char * argv[]) {
    std::vector<int> vec {1,2,3,4};
    std::vector<int>::iterator vec_iter = vec.begin();
    std::cout<<*vec_iter<<std::endl; //*vec_iter = 1
    std::vector<int>::iterator vec_end = vec.end();
    
    while(vec_iter != vec_end)
    {
        std::cout<<"++(*vec_iter) -> Vec_iter = "<<*vec_iter<<std::endl; //*vec_iter = 1,2,3,4
        ++vec_iter;
    }
    vec_iter = vec.begin();
    while(vec_iter != vec_end)
    {
        // this increases the value in the vector,
        // e.g, 1++ -> 2
        ++(*vec_iter);
        std::cout<<"++(*vec_iter) -> Vec_iter = "<<*vec_iter<<" in pos: "<<&(*vec_iter)<<std::endl; //*vec_iter = 2,3,4,5
        // this increases the value of the iterator,
        // i.e., the entry to which the iterator points
        ++vec_iter; //loop param
    }
    vec_iter = vec.begin();
    bool allFlag = all_of(vec_iter, vec_end,[](int i){ return i >0; });
    std::cout<<"All_of returns for positive numbers "<<allFlag<<std::endl; //true
    auto pos = find(vec_iter, vec_end,3);
    std::cout<<"3 found in position "<<&(*pos)<<std::endl; //true
                          
    std::vector<int> vec1 {1,2,3,4,5,6,7};
    std::vector<int> vec2 {1,2,3,4,5,6,7,8};
    int equalFlag = std::equal(vec1.begin(),vec1.end(),vec2.begin());
    std::cout<<"vec1 and vec2 equal "<<equalFlag<<std::endl; //true because it does not count las [begin,end) last element is excluded
    int equalFlag1 = std::equal(vec1.begin(),vec1.begin()+4,vec2.begin()+5);//vec1.begin()+4 = first 4 elements
    std::cout<<"vec1.begin+4 and vec2.begin+5 equal "<<equalFlag1<<std::endl; //false
    int equalFlag2 = std::equal(vec1.begin(),vec1.begin()+4,vec2.begin()+4);//vec1.begin()+4 = first 4 elements
    std::cout<<"vec1.begin+4 and vec2.begin+4 equal "<<equalFlag2<<std::endl; //false
    auto searchFlag =std::search(vec2.begin(),vec2.end(),vec1.begin(),vec1.end());
    std::cout<<"search "<<*searchFlag<<std::endl;
    bool for_eachFlag = for_each(vec.begin(), vec_end,[](int i){ return i >0; });
    std::cout<<"for_each "<<for_eachFlag<<std::endl;
    
    //transform
    std::vector<int> vec_t;
    vec_t.resize(vec1.size());
    std::transform(vec1.begin(), vec1.end(), vec_t.begin(),[](int i){ return i*2; });
    vec_iter = vec_t.begin();
    vec_end = vec_t.end();
    while( vec_iter!= vec_end)
    {
        std::cout<<*vec_iter<<" "; //2,4,6,8,10,12,14
        ++vec_iter;
    }
    std::cout<<"\n";
    vec_iter = vec1.begin();
    vec_end = vec1.end();
    while( vec_iter!= vec_end)
    {
        std::cout<<*vec_iter<<" "; //1,2,3,4,5,6,7 ->vec1 ws not changed
        ++vec_iter;
    }
    std::cout<<"\n";
    std::transform(vec1.begin(), vec1.end(), vec1.begin(),[](int i){ return i*2; });
    vec_iter = vec1.begin();
    vec_end = vec1.end();
    while( vec_iter!= vec_end)
    {
        std::cout<<*vec_iter<<" "; //2,4,6,8,10,12,14 ->vec1 changed since we specified vec1.begin as tobecopied vec in transform func
        ++vec_iter;
    }
    
    //remove
    std::cout<<"\n";
    vec1 = {1,2,3,4,5,6,7};
    for_each(vec1.begin(), vec1.end(),[](int i){ std::cout<<i<<" "; });
    //prints 1,2,3,4,5,6,7
    std::cout<<"\n";
    auto b_iter = vec1.begin();
    b_iter++;
    remove(b_iter,vec1.end(),2); //b_iter is useless do not use this
    for_each(vec1.begin(), vec1.end(),[](int i){ std::cout<<i<<" "; });
    //prints 1,3,4,5,6,7,7 ->2 is removed 7 duplicated
    
    std::cout<<"\n";
    vec1 = {1,2,3,4,5,6,7};
    b_iter = vec1.begin();
    b_iter++;
    b_iter = remove(b_iter,vec1.end(),*b_iter);
    for_each(vec1.begin(), vec1.end(),[](int i){ std::cout<<i<<" "; });
    //prints 1,3,4,5,6,7,7
    std::cout<<*b_iter<<std::endl; //prints 7
}
