#include "SelfBringUp.hpp"

int main(int argc, char** argv)
{
    cout << "The Best Integration not seen ever..." << endl;

    int* pnum;
    *pnum = 10;
    SelfBringUp* sbu0 = new SelfBringUp();
    SelfBringUp* sbu1 = new SelfBringUp(pnum);

    return 1;
}