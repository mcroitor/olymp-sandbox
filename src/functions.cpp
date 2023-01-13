#include <iostream>
#include <chrono>
#include <cstdlib>
#include <unistd.h>

#include "definitions.h"

void print_usage(const std::string appname)
{
    std::cout << "Usage:" << std::endl;
    std::cout << "\t" << appname << " --help | -h" << std::endl;
    std::cout << "\t" << appname << " -a <app> -t <time> -m <memory> -i <in.file> -o <outfile>" << std::endl;
    std::cout << "\t" << appname << " --app=<app> --time=<time> --memory=<memory> --input=<in.file> --output=<outfile>" << std::endl;
}

void print_status(STATUS_TYPE status)
{
    const std::string message[] = {
        "success",
        "fail",
        "time limit",
        "memory limit",
        "execution failed",
    };
    std::cout << message[(int)status] << std::endl;
}

void run_task(std::string application, std::string input, std::string output)
{
    std::cout << "execute application:" << std::endl;
    std::cout << application << " input: " << input << " output: " << output << std::endl;
}