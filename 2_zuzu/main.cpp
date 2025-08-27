#include "Bus.h"
#include "olc6502.h"
#include <iostream>

int main() {
    Bus bus;
    olc6502 cpu;
    cpu.ConnectBus(&bus);

    // Test write and read via Bus
    bus.write(0x0000, 0x42);
    uint8_t value_bus = bus.read(0x0000);
    std::cout << "Bus read 0x0000: 0x" << std::hex << (int)value_bus << std::endl;
    printf("Bus read 0x0000: 0x%02X\n", value_bus);

    // Test write and read via CPU (olc6502)
    cpu.write(0x0001, 0x99);
    uint8_t value_cpu = cpu.read(0x0001);
    printf("CPU read 0x0001: 0x%02X\n", value_cpu);

    cpu_set

    return 0;
}