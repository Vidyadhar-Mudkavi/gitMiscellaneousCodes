/**

  *File: exprNode.cpp

  *Description:

   this file implements the class exprNode. exprNode is
   a base class and is never instantiated. it is therefore
   an abstract class.

  *Version: 1.0

  *Dependencies:

  *Authors: Premalatha, Vidyadhar Mudkavi, CTFD, NAL

  *Date: 27 August 1999
  */

// system includes

// local includes
#include "exprNode.h"
#include "anExpr.h"

// const declarations

// function prototypes

// forward declarations

// begin class implementation
   ////////////////////////////////////////
   //                                      
   //    implement constructors here       
   //                                      
   //                                      

/**
   default constructor
  */
exprNode::exprNode()
{
}

/**
   copy constructor
  */
exprNode::exprNode(const exprNode& class_var)
{
}

   ////////////////////////////////////////
   //                                      
   //    implement assignment operators    
   //                                      
   //                                      

exprNode& exprNode::operator=(const exprNode& class_var)
{
   return *this;
}

   ////////////////////////////////////////
   //                                      
   //    implement the destructor          
   //                                      
   //                                      

exprNode::~exprNode()
{
}

   ////////////////////////////////////////////
   //                                          
   //   implement other member functions here  
   //                                          
   //                                          
