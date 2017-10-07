#ifndef CSMARTPTR_H
#define CSMARTPTR_H

class CSmartPtr
{
public:
    CSmartPtr(int* pPointer);
    ~CSmartPtr();

    int& operator*();
    operator bool();

private:
    int* m_pInt;
};

#endif
