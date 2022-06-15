#include "PowerControl.h"
#include "TemperatureControl.h"

int main() {
    PowerControlStart();
    TemperatureControlStart();

    PowerControlStop();
    TemperatureControlStop();
    return 0;
}
