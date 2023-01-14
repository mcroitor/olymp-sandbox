#include <iostream>
#include <chrono>
#include <thread>
#include <iostream>
#include <cstdlib>

#include "definitions.h"

int main()
{
    int timeoutInMs, memorySizeInKb;
    std::cin >> timeoutInMs >> memorySizeInKb;

    std::int8_t *allocatedMemory = new std::int8_t[memorySizeInKb * 1024]{};

    std::cout << "allocated " << memorySizeInKb << " KB successfully." << std::endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(timeoutInMs));

    std::cout << "done after " << timeoutInMs << " ms." << std::endl;

    print_status(STATUS_TYPE::SUCCESS, timeoutInMs, memorySizeInKb);

    delete allocatedMemory;
    return 0;
}