#include "SelfBringUp.hpp"

SelfBringUp::SelfBringUp()
{
    cout << "Hi there dear world!" << endl;
}

SelfBringUp::SelfBringUp(void* data)
{
    cout << *(int*)data << endl;
}

// template<typename T>
// T SelfBringUp::Getter(void)
// {
//     return coef;
// }