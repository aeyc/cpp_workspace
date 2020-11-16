//
//  headers.h
//  headers
//
//  Created by Ayca Begum Tascioglu on 2.11.2020.
//

#ifndef H_TRANSHEADERS
#define H_TRANSHEADERS
#include "headers.h"
class TransportHeader:public Header{

public:
    TransportHeader(int s);
    virtual ~TransportHeader(){}
    std::string getInfo() const override;
};

#endif /* H_MACHEADERS */
