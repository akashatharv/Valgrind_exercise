#include <iostream>
#include <AnalogSensor.hpp>

int main()
{
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    int terminator = 1;
    if(terminator == 1)
    {
        std::cout << "DONE" << std::endl;
    }
    else {}
    return 0;
}
