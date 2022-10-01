//Homework 36

/* 
 * Filename:        main.cpp
 * Purpose:      
 * 
 * Author:          Zachary Charles Stewart
 * Student ID:      105903414
 * Created on       April 27, 2017, 1:43 PM
 */

//Preprocessor Directives
#include <cstdlib>
#include <iostream>
#include <fstream>

#include "graphType.h"
#include "linkedList.h"
#include "unorderedLinkedList.h"
#include "linkedQueue.h"
#include "queueADT.h"

//Namespace
using namespace std;

//--------------------------------------------------------------------------//
//
//Main Function
//
//Inputs:       int argc, char** argv
//Outputs:      int
//
//Purpose:      Main program file. Other necessary files are included here 
//              in order to be run


int main(int argc, char** argv) 
{
    graphType graphONE(20);
    graphONE.createGraph();
    
    cout << "Depth First Traversal:";
    graphONE.depthFirstTraversal();
    cout << endl;
    
    cout << "Breadth First Traversal:";
    graphONE.breadthFirstTraversal();
    cout << endl << endl;
    
  
    //Terminate program upon successful execution
    exit(EXIT_SUCCESS);
}

//--------------------------------------------------------------------------//



