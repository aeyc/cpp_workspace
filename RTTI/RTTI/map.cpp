//
//  map.cpp
//  RTTI
//
//  Created by Ayca Begum Tascioglu on 4.11.2020.
//

#include <iostream>
#include <map>
#include <string>
int main(){
    std::map<int,std::string> map_m;
    map_m.insert(std::make_pair(1234567, "Ayca Begum Tascioglu"));
    map_m[7] = "Hi";
    std::cout<<map_m[0]<<std::endl; //prints empty str
    std::cout<<map_m[1234567]<<std::endl; //prints Ayca Begum Tascioglu
    
    auto it = map_m.find(7);
    if (it != map_m.end()){
        std::cout<<"value: "<<it->second<<std::endl;
    }
    return 0;
}
