#include "zombie.hpp"

int main(void)
{
    zombie one("salah");
    zombie two("med");
    zombie *three = newzombie("alex");

    two.announce();
    randomChump("saiiiiiid");
    one.announce();
    delete three;
}