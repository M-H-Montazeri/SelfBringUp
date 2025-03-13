#ifndef SELFBRINGUP_HPP
#define SELFBRINGUP_HPP

    #include "stdio.h"
    #include "iostream"
    #include "string"

    using namespace std;

    class SelfBringUp
    {
        public:
            SelfBringUp();
            SelfBringUp(void*);
            template<typename T> T Getter(string);

        private:
            int* pnum = new int();
    };

#endif
