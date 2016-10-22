/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 21, 2016, 12:27 AM
   Purpose:         
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <string>
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void swap(int&,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int     //in,
            in1,                //1st place holder
            in2,                //2nd place
            in3,                //3rd place
            in4;                //4th place
    
    string  in;                 //We put user's input into string to use array for each character/place
    
    //Ask user for a 4-character number
    do
    {
    cout<<"Enter 4-character number: ";cin>>in;
    }while(in.size()>4 || in.size()<4);
    cout<<endl;
    
    if(in[0]>=48 && in[0]<=57) in1=(in[0]-48);          //If each place is a number, assign to each variables
    if(in[1]>=48 && in[1]<=57) in2=(in[1]-48);          //100s place
    if(in[2]>=48 && in[2]<=57) in3=(in[2]-48);          //10s place
    if(in[3]>=48 && in[3]<=57) in4=(in[3]-48);          //1s place
    
    for(int lp=2;lp>0;lp--)                                                         //We loop TWICE just to make sure it's SORTED
    {
        if((in[0]>=48 && in[0]<=57) && (in[1]>=48 && in[1]<=57)) swap(in1,in2);     //Swap & SORT ONLY IF BOTH INTEGERS (1000s & 100s place)
        if((in[1]>=48 && in[1]<=57) && (in[2]>=48 && in[2]<=57)) swap(in2,in3);     //(100s & 10s place)
        if((in[2]>=48 && in[2]<=57) && (in[3]>=48 && in[3]<=57)) swap(in3,in4);     //(10s & 1s place)
        if((in[0]>=48 && in[0]<=57) && (in[1]>=48 && in[1]<=57)) swap(in1,in2);     //(1000s & 100s place)
        if((in[1]>=48 && in[1]<=57) && (in[2]>=48 && in[2]<=57)) swap(in2,in3);     //(100s & 10s place)
        if((in[2]>=48 && in[2]<=57) && (in[3]>=48 && in[3]<=57)) swap(in3,in4);     //(10s & 1s place)
        if((in[0]>=48 && in[0]<=57) && (in[1]>=48 && in[1]<=57)) swap(in1,in2);     //(1000s & 100s place)
        if((in[0]>=48 && in[0]<=57) && (in[2]>=48 && in[2]<=57)) swap(in1,in3);     //(1000s & 10s place)
        if((in[1]>=48 && in[1]<=57) && (in[3]>=48 && in[3]<=57)) swap(in2,in4);     //(100s & 1s place)
        if((in[0]>=48 && in[0]<=57) && (in[3]>=48 && in[3]<=57)) swap(in1,in4);     //(1000s & 1s place)
    }
    
    if(in[0]>=48 && in[0]<=57)                                                      //If 1000s place=integer then print out NUMBER & STARS
    {
        cout<<in1<<" ";
        for(int rep=in1;rep>0;rep--)                                                
        {
            cout<<"*";
        }
    }
    else
    {
        cout<<in[0]<<" ";                                                           //ELSE print out character & ASCII code
        cout<<static_cast<int>(in[0]);
    }
    cout<<endl;
    
    if(in[1]>=48 && in[1]<=57)                                                      //If 100s place=integer then print out NUMBER & STARS
    {
        cout<<in2<<" ";
        for(int rep=in2;rep>0;rep--)                                                
        {
            cout<<"*";
        }
    }
    else                                                                            //ELSE print out character & ASCII CODE
    {
        cout<<in[1]<<" ";
        cout<<static_cast<int>(in[1]);
    }
    cout<<endl;
    
    if(in[2]>=48 && in[2]<=57)                                                      //If 10s place=integer then print out NUMBER & STARS
    {
        cout<<in3<<" ";
        for(int rep=in3;rep>0;rep--)
        {
            cout<<"*";
        }
    }
    else                                                                            //ELSE print out character & ASCII CODE
    {
        cout<<in[2]<<" ";
        cout<<static_cast<int>(in[2]);
    }
    cout<<endl;
    
    if(in[3]>=48 && in[3]<=57)                                                      //If 1s place=integer then print out NUMBER & STARS
    {
        cout<<in4<<" ";
        for(int rep=in4;rep>0;rep--)
        {
            cout<<"*";
        }
    }
    else                                                                            //ELSE print out character & ASCII CODE
    {
        cout<<in[3]<<" ";
        cout<<static_cast<int>(in[3]);
    }
    cout<<" ";
    

    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Sort  ********************************************
//Purpose:  Swap two numbers which ever is smaller goes in the first int
//Inputs:   Inputs to the function here -> Description, Range, Units
//  x->First int to compare
//  y->Second int to compare
//Output:   Outputs to the function here -> Description, Range, Units
//  No return, but applies to the used variables with "&"
//******************************************************************************

void swap(int& x, int& y)                                                           //Function for swapping 2 numbers
{
    if (y<x)
    {
        int temp;
        temp=x;
        x=y;
        y=temp;
    }
}