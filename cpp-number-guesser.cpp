#include <iostream>
#include <string>
#include <random>

int main() {

    std::random_device rd;
    std::uniform_int_distribution<int> dist(1,100);
    int correct;
    correct = dist(rd);
    int guess;
    int turns = 0;
    bool keepGoing = true;
    std::string userName;
  

    std::cout << "Hello! What is your name?" << std::endl;
    std::cin >> userName;

    std::cout << "Hello, " << userName << std::endl;
    std::cout << "Guess a number between 1 and 100" << std::endl;  

    while (keepGoing){
        
        std::cin >> guess;
        
        if (guess < correct){
            std::cout << "Too low" << std::endl;
            turns ++;
        }

        if (guess > correct){
            std::cout << "Too high" << std::endl;
            turns ++;
            }
        if (guess == correct){
            std::cout << "Right on!" << std::endl;
            turns ++;
            keepGoing = false;
            }
    }
    
    if (turns <= 7){
        std::cout << "Nice! You got it in " << turns << " turns!" << std::endl;
        }
    if (turns > 7) {
        std::cout << "It took you " << turns << " turns. It should only take 7 turns at most..." << std::endl;
        }
    
    }
