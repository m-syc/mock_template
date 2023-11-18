#include <stdint.h>
#include <gmock/gmock.h>

class MockObjIf {
protected:
    virtual void bar(void) = 0;
};

class MockObj: public MockObjIf {
public:
    MOCK_METHOD(void, bar, (), (override));
};

extern "C"
{
    void bar(void);
}

extern MockObj* mock_obj;
