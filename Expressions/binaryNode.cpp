/**

  *File: binaryNode.cpp

  *Description:

   this file implements the class binaryNode

  *Version: 1.0

  *Dependencies:

  *Authors: Premalatha, Vidyadhar Mudkavi, CTFD, NAL

  *Date:
  */

// system includes

// local includes
#include "binaryNode.h"

// const declarations

// function prototypes

// forward declarations

// begin class implementation
   ////////////////////////////////////////
   //                                      
   //    implement constructors here       
   //                                      
   //                                      

#if 0 // no default behaviour
/**
   default constructor
  */
binaryNode::binaryNode()
{
}
#endif

#if 0 // no copy construction
/**
   copy constructor
  */
binaryNode::binaryNode(const binaryNode& class_var)
{
}
#endif


binaryNode::binaryNode(const aString& op, anExpr left, anExpr right)
: pv_operator(op), pv_left(left), pv_right(right)
{
}

#if 0 // no assignment
   ////////////////////////////////////////
   //                                      
   //    implement assignment operators    
   //                                      
   //                                      

binaryNode& binaryNode::operator=(const binaryNode& class_var)
{
   return *this;
}
#endif

   ////////////////////////////////////////
   //                                      
   //    implement the destructor          
   //                                      
   //                                      

binaryNode::~binaryNode()
{
// empty
}

   ////////////////////////////////////////////
   //                                          
   //   implement other member functions here  
   //                                          
   //                                          

/**
   the output function
  */

void binaryNode::Print(ostream& os) const
{
   os << "(" << pv_left << pv_operator << pv_right << ")";
}

/**
   function to evaluate the expression
  */

int binaryNode::Evaluate() const
{
   int op1 = pv_left.Evaluate();
   int op2 = pv_right.Evaluate();

   if ( pv_operator == "-" )
   {
      return op1 - op2;
   }

   if ( pv_operator == "+" )
   {
      return op1 + op2;
   }

   if ( pv_operator == "*" )
   {
      return op1 * op2;
   }

   if ( pv_operator == "/" && op2 != 0 )
   {
      return op1 / op2;
   }

   throw "Error. Bad operator " + pv_operator + "in binaryNode";

   return 0;
}
