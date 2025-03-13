#ifndef SELFBRINGUP_HPP
#define SELFBRINGUP_HPP

    #include "cstdio"
    #include "iostream"
    #include "cstring"

    using namespace std;

    class SelfBringUp
    {
        public:
            SelfBringUp();
            SelfBringUp(void*);
            //template<typename T> T Getter(void);

        private:
            int* pnum = new int();
            static const int coef = 25;
    };

#endif
