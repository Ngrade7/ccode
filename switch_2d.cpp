// switch_2d.cpp nrg
//compile g++ ifelse_2d.cpp

#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
        int r,c;//row and column
        string word ="My goal";
        int val = 0;
        int m[8][8] = {
            {2,1,2,3,1,2,2,2} ,
            {1,2,3,4,2,2,2,2} ,
            {4,4,4,4,4,4,4,4} ,
            {3,4,4,4,2,2,2,2} ,
            {4,2,2,2,2,2,2,2} ,
            {2,4,4,4,4,4,4,4} ,
            {1,1,1,1,1,1,3,3} ,
            {3,3,3,3,3,3,3,3}
        };

          for (r = 0; r < 8; r++){
            for (c = 0; c < 8; c++){
              val = m[r][c];
				switch ( val ) {
  case 1:            
    word = "DONT";
    break;
  case 2:            
    word = "TOUCH";
    break;
  case 3:            
    word = "MY";
    break;
  default:            
    word = " SPAGHETTI ";
    break;
  }
          cout<<word;     
             }//end c
            cout<<"\n"; 
        }//end r
        printf("\n");
    return 0;
}
