#include "harl.hpp"

int main()
{
    harl    obj;

    obj.complain("DEBUG");
    obj.complain("INFO");
    obj.complain("WARNING");
    obj.complain("ERROR");
    obj.complain("TEST");

    return 0;
}
