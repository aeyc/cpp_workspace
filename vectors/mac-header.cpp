//
//  mac-header.cpp
//  headers
//
//  Created by Ayca Begum Tascioglu on 2.11.2020.
//

#include <stdio.h>
#include "mac-header.h"
MacHeader::MacHeader(int s):Header(Header::OsiLayer::MAC,s){}
std::string MacHeader::getInfo() const{
    return "Mac header";
}
