//
//  headers.cpp
//  headers
//
//  Created by Ayca Begum Tascioglu on 2.11.2020.
//

#include "headers.h"

Header::Header(OsiLayer l,int s):size(s),layer(l){
    
}
/*
Header::~Header(){
}
 */
void Header::setSize(int s){
    size = s;
}
int Header::getSize() const{
    return size;
}
Header::OsiLayer Header::getLayer() const{
    return layer;
}

void Header::setLayer(OsiLayer l){
    layer = l;
}
/*
std::string  Header::getInfo() const{
    return "Generic Header";
}
*/
