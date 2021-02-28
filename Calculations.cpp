//
// Created by Sora on 2/28/2021.
//

#include "Calculations.hpp"
#include <stdlib.h>
#include <cmath>
using namespace std;

 float Calculations::GetNextRandomInterval(float avg)
{

float randomNum = static_cast<float>( rand()) /static_cast<float>(RAND_MAX);
float intervalTime = (-1 * (1.0 / avg) * log(randomNum));
return intervalTime;

}