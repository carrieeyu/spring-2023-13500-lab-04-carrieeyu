//hard coding all the functions

#include <iostream>
#include "funcs.h"

int main(){
  
  //testing task A
  std:: cout << "7,4 box shape: \n" << box(7,4) << std:: endl; //test 1A; 4 rows, 7 columns
  std:: cout << "2,3 box shape: \n" << box(2,3) << std:: endl; //test 2A
  

  //testing task B
  std:: cout << "11,6 checkerboard shape: \n" << checkerboard(11,6) << std:: endl; //test 1B
  std:: cout << "5,2 checkerboard shape: \n" << checkerboard(5,2) << std:: endl; //test 2B
  
  
  //testing task C
  std:: cout << "8 size cross shape: \n" << cross(8) << std:: endl; //test 1C
  std:: cout << "4 size cross shape: \n" << cross(4) << std:: endl; //test 2C


  //testing task D
  std:: cout << "6 side length lower triangle shape: \n" << lower(6) << std:: endl;
  std:: cout << "3 side length lower triangle shape: \n" << lower(3) << std:: endl;

  
  //testing task E
  std:: cout << "5 side length upper triangle shape: \n" << upper(5) << std::endl;
  std:: cout << "10 side length upper triangle shape: \n" << upper(10) << std::endl;

  
  //testing task F
  std:: cout << "12,5 trapezoid shape: \n" << trapezoid(12,5) << std:: endl;
  std:: cout << "12,7 trapezoid shape: \n" << trapezoid(12,7) << std:: endl;

  
  //testing task G
  std:: cout << "16,11 checkerboard3x3 shape: \n" << checkerboard3x3(16,11) << std:: endl;
  std:: cout << "27,27 checkerboard3x3 shape: \n" << checkerboard3x3(27,27) << std:: endl;

  return 0;
}
