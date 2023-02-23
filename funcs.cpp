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
  checkerboard_shape += "\n"; //skips to the next line after each row/length of height
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



//Task E; upper triangle (in progess)

std:: string upper(int length){

  std:: string upper_triangle_shape = "";

  for(int row = length; row >= 0; row--){
    for(int col = row; col >= 0; col--){
      upper_triangle_shape += "*";
    }
    upper_triangle_shape += "\n";
  }

  return upper_triangle_shape;
}



//Task F; upside-down trapezoid
//Task G;checkerboard(3x3)
