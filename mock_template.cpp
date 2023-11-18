#include "mock_template.hpp"

MockObj* mock_obj;

void bar(void)
{
    mock_obj->bar();
}
