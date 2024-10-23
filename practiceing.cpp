#include <iostream>

int main(){
  int userInputTemp;
  const int TENSENO = -99;
  int counter = 0;
  std::cout <<"Then senseio temperature is:" << TENSENO << std::endl;
  std::cout <<"Please enter the temperatures entill meet the tenseio number" << std::endl;
  while(true){
    int inputNum;
    std::cout <<"Enter your temperature number:";
    std::cin >> inputNum;
    if(inputNum < TENSENO || inputNum > 100){
      std::cout <<"Temperature: " << inputNum << " out of range" << std::endl;
      contune;
    }
    
  }
}
