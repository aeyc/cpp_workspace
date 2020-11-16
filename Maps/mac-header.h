//
//  headers.h
//  headers
//
//  Created by Ayca Begum Tascioglu on 2.11.2020.
//

#ifndef H_MACHEADERS
#define H_MACHEADERS
#include "headers.h"
class MacHeader:public Header{

public:
    MacHeader(int s);
    virtual ~MacHeader(){}
    std::string getInfo() const override;
};

#endif /* H_MACHEADERS */
