#include <iostream>
#include "csmartptr.h"

CSmartPtr MakeSmartPointer(const int& iInt)
{
    return CSmartPtr(new int(iInt));
}

int main()
{
    CSmartPtr spInt = MakeSmartPointer(11);

    if (spInt)
        std::cout << *spInt << std::endl;

    return 0;
}

