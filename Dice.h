#include <iostream>
#include <string>
#include <time.h>
#include <random>
using namespace std;

class Dice{
private:
    int number;
public:
    Dice();
    int roll();
    string toString();
};