// ifelse_2d.cpp nrg
//compile g++ ifelse_2d.cpp

#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
        int r,c;//row and column
        char thechar;
        char w = '<'; //1
        char x = '>'; //2
        char y = '*'; //3
        char z = '?'; //4
        int val = 0;
        int m[8][8] = {
            {2,1,2,3,1,2,2,2} ,
            {1,2,2,2,2,2,2,2} ,
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
              if (val == 1){
                  thechar = w;}
              else if(val == 2){
                  thechar = x;}
				else if (val == 3){
					thechar = y;}
              else{
                  thechar = z;}  
                  cout<<thechar;
             }//end c
            cout<<"\n"; 
        }//end r
        printf("\n");
    return 0;
}
