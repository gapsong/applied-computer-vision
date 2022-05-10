#include <iostream>
using namespace hardwareInterface;

int main()
{
    hardwareInterface::init();
    hardwareInterface::motors::enable(true);
    hardwareInterface::motors::setSpeed(0.0f, 0.0f);
    hardwareInterface::motors::enable(false);
    hardwareInterface::shutdown();
}
