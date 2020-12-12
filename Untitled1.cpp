// Created on December 2020
// This is a program tells you number of days in a month.
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <string>

int main() {
  // This is the function tells you number of days in a month.

  int userInput;
  int userInputYearUnmber;
  std::string userInputAsString;
  std::string userInputYearString;

  // input
  std::cout << "Enter the month you want check in number 1-12:" << std::endl;
  std::cin >> userInputAsString;
  std::cout << "" << std::endl;

  // process + output
    try {
        userInput = std::stoi(userInputAsString);
        if (userInput == 1) {
            std::cout << "31 days in January" << std::ends;
        } else if (userInput == 2) {
            std::cout << "Enter a year:" << std::endl;
            std::cin >> userInputYearString;
            std::cout << "" << std::endl;
            userInputYearUnmber = std::stoi(userInputYearString);
            if (userInputYearUnmber % 4 != 0) {
                std::cout << "28 days in" << userInputYearUnmber << "February" << std::ends;
            } else {
                if (userInputYearUnmber % 100 != 0) {
                    std::cout << "29 days in" << userInputYearUnmber << "February" << std::ends;
                } else {
                    if (userInputYearUnmber % 400 != 0) {
                        std::cout << "28 days in" << userInputYearUnmber << "February" << std::ends;
                    } else {
                        std::cout << "29 days in" << userInputYearUnmber << "February" << std::ends;
                    }
                }
            }
        } else if (userInput == 3) {
        std::cout <<"31 days in March" << std::ends;
        } else if (userInput == 4) {
            std::cout <<"30 days in April" << std::ends;
        } else if (userInput == 5) {
         std::cout <<"31 days in May" << std::ends;
        } else if (userInput == 6) {
            std::cout <<"30 days in June" << std::ends;
        } else if (userInput == 7) {
            std::cout <<"31 da
 } else if (userInput == 8) {
         std::cout <<"31 days in August" << std::endl;
        } else if (userInput == 9) {
            std::cout <<"30 days in September" << std::endl;
        } else if (userInput == 10) {
            std::cout <<"31 days in October" << std::endl;
        } else if (userInput == 11) {
            std::cout <<"30 days in November" << std::endl;
        } else if (userInput == 12) {
            std::cout <<"31 days in December" << std::endl;
        }
    }
    } catch (std::invalid_argument) {
        std::cout << "You are not type in correctly!!!" << std::endl;
  }
}
