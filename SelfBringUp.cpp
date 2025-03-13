#include "SelfBringUp.hpp"

SelfBringUp::SelfBringUp()
{
    cout << "Hi there dear world!" << endl;
}

SelfBringUp::SelfBringUp(void* data)
{
    *pnum = 10;
    cout << *(int*)data << endl;
}

template<typename T>
T Getter(string name)
{
    if(string::compare(name, )
}