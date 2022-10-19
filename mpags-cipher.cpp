#include <iostream>
#include <string>
#include <vector>


std::string input_file{""};
std::string output_file{""};

int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs { argv, argv+argc };
    // std::cout << cmdLineArgs.size() << std::endl;

    for (int index = 0; index < cmdLineArgs.size(); index++ ) {  //std::string i : cmdLineArgs
        // Printing help
        if (cmdLineArgs[index].rfind("--help", 0) == 0 || cmdLineArgs[index].rfind("-h", 0) == 0) {
            std::cout << "Welcome to the help page." << std::endl;
        }
        // Printing version of the code
        if (cmdLineArgs[index].rfind("--version", 0) == 0) {
            std::cout << "Version of the code: 0.1.0" << std::endl;
        }

        // Input file handling
        if (cmdLineArgs[index].rfind("-i", 0) == 0) {
            if (index == cmdLineArgs.size()-1) {
                std::cout << "There is no input file specified" << std::endl;
            }
            else
                std::cout << "The input file is: " << cmdLineArgs[index+1] << std::endl;
                input_file = cmdLineArgs[index+1];
        }

        // Output file handling
        if (cmdLineArgs[index].rfind("-o", 0) == 0) {
            if (index == cmdLineArgs.size()-1) {
                std::cout << "There is no outnput file specified" << std::endl;
            }
            else
                std::cout << "The outnput file is: " << cmdLineArgs[index+1] << std::endl;
                output_file = cmdLineArgs[index+1];
        }

    }

}