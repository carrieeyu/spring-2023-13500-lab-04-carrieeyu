#include <iostream>
#include "funcs.h"

//Task A; box

std:: string box(int width, int height){

  std:: string box_shape = ""; //creating empty string to add *'s

  for(int row = 0; row < height; row++){
    for(int col = 0; col < width; col++){
      box_shape += "*";
    }
  box_shape += "\n"; //skips to the next line after each row/length of height
  }
  return box_shape;
  
}



//Task B; checkerboard

std:: string checkerboard(int width, int height){

  std:: string checkerboard_shape = "";

  for(int row = 0; row < height; row++){
    for(int col = 0; col < width; col++){
      if((row + col) % 2 == 0){ //adds the indexes of row and col to determine whether that position needs an asterick or space
        checkerboard_shape += "*";
      }
      else{
        checkerboard_shape += " ";
      }
    }
  checkerboard_shape += "\n"; 
  }
  return checkerboard_shape;
}



//Task C; cross

std:: string cross (int size){

  std:: string cross_shape = "";

  for(int row = 0; row < size; row++){
    for(int col = 0; col < size; col++){
      if((row == col) || (row + col == size-1)){ 
        cross_shape += "*";
      }
      else{
        cross_shape += " ";
      }
    }
    cross_shape += "\n";
  }
  return cross_shape;
}



//Task D; lower triangle

std:: string lower(int length){

  std:: string lower_triangle_shape = "";

  for(int row = 1; row <= length; row++){
    for(int col = 1; col <= row; col++){
      lower_triangle_shape += "*";
    }
    lower_triangle_shape += "\n";
  }
  return lower_triangle_shape;
}



//Task E; upper triangle

std:: string upper(int length){

  std:: string upper_triangle_shape = "";

  for(int row = 0; row < length; row++){
    for(int col = 0; col < length; col++){
      if (row <= col){
        upper_triangle_shape += "*"; //only when row < col or row == col
      }
      else{
        upper_triangle_shape += " "; //otherwise, only a space is printed
      }
    }
    upper_triangle_shape += "\n";
  }
  return upper_triangle_shape;
}



//Task F; upside-down trapezoid

std:: string trapezoid(int width, int height){

  std:: string trapezoid_shape = "";

  if((width/2) < height){
    std:: cout << "Impossible shape! \n";
  }
  else{
    for(int row = 0; row < height; row++){
      for(int col = 0; col < row; col++){
        trapezoid_shape += " ";
      }
      for(int d = 0; d < width; d++){
        trapezoid_shape += "*";
      }
      width -= 2; //continuosuly removes 2 stars from the previous row
      trapezoid_shape += "\n";
    }
  }
  return trapezoid_shape;
}



//Task G;checkerboard(3x3)

std:: string checkerboard3x3(int width, int height){

  std:: string checkerboard3x3_shape = "";

  for(int row = 0; row < height; row++){
    for(int col = 0; col < width; col++){
      if(((row/3) + (col/3)) % 2 == 0){ //same concept as Task B except this time, the checkerboard is 3x3; hence dividing by 3
        checkerboard3x3_shape += "*";
      }
      else{
        checkerboard3x3_shape += " ";
      }
    }
    checkerboard3x3_shape += "\n";
  }
  return checkerboard3x3_shape;
}
