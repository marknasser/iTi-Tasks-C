#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //loop for cout and cin
    // the inpputs will be stored in two dimntional array
    // for 4 students as rows and 3 subjects as col
    // avg of every subject

    int Grades [3][4];
    int row=0,col=0,sum=0,avg=0;
    for (row=0; row<3; row++){
        for (col=0 ; col<4; col++){
            cout<<"Enter G of student"<<row + 1 <<" subject num"<<col + 1 <<": ";cin>>Grades[row][col];
        }
    }
    col=0;row=0;




    //sum of every student
   for(row=0; row<3; row++){
        sum=0;
        for (col=0 ; col<4; col++){
        sum+= Grades[row][col];
        }
         cout<<"the sum of Sub of student num"<<row + 1<< " :"<<sum<<endl;
     }



     col=0;row=0;sum=0;
  for (col=0 ; col<3; col++){
        avg=0; sum=0;
        for(row=0; row<4; row++){
       sum+= Grades[row][col];
        }
         cout<<"the avg of Subject num"<<col + 1<< " :"<<sum/row<<endl;
     }





    return 0;
}


/* assigmnt 2
// first and last in two seperated arrays
//output the result  with concat the 2 arrays


*/

/*assignment 3



 */
