#include "csmartptr.h"
#include <iostream>

CSmartPtr::CSmartPtr(int* pPointer)
:m_pInt(pPointer)
{

}

CSmartPtr::~CSmartPtr()
{
    delete m_pInt;
}

int& CSmartPtr::operator*()
{
    return *m_pInt;
}

CSmartPtr::operator bool()
{
    return (m_pInt != NULL);
}

