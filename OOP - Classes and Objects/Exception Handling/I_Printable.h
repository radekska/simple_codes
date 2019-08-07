//
// Created by Admin on 19/04/2019.
//

#ifndef INHERITANCE_I_PRINTABLE_H
#define INHERITANCE_I_PRINTABLE_H


#include <iosfwd>

class I_Printable {

    friend std::ostream &operator<<(std::ostream &os, I_Printable &obj);

public:
    virtual void print(std::ostream &os)=0;
    virtual ~I_Printable() = default;
};


#endif //INHERITANCE_I_PRINTABLE_H
