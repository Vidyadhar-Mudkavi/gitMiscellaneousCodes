/**

  *File: unaryNode.cpp

  *Description:

   this file implements the class unaryNode

  *Version: 1.0

  *Dependencies:

  *Authors: Premalatha, Vidyadhar Mudkavi, CTFD, NAL

  *Date:
  */

// system includes

// local includes
#include "unaryNode.h"

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
unaryNode::unaryNode()
{
   throw "This is not invoked!";
}
#endif

unaryNode::unaryNode(const aString& op, anExpr expr)
   : pv_operator(op), pv_operand(expr)
{
}

#if 0 // no copy construction
/**
   copy constructor
  */
unaryNode::unaryNode(const unaryNode& class_var)
{
}
#endif


#if 0 // no assignment operation
   ////////////////////////////////////////
   //                                      
   //    implement assignment operators    
   //                                      
   //                                      

unaryNode& unaryNode::operator=(const unaryNode& class_var)
{
   return *this;
}
#endif

   ////////////////////////////////////////
   //                                      
   //    implement the destructor          
   //                                      
   //                                      

unaryNode::~unaryNode()
{
}

   ////////////////////////////////////////////
   //                                          
   //   implement other member functions here  
   //                                          
   //                                          

/**
   display function to display the expression
  */

void unaryNode::Print(ostream& os) const
{
   os << "(" << pv_operator << pv_operand << ")";
}

/**
   function to evaluate the expression
  */

int unaryNode::Evaluate() const
{
   if ( pv_operator == "-" )
   {
      return -pv_operand.Evaluate();
   }

   if ( pv_operator == "+" )
   {
      return pv_operand.Evaluate();
   }

   throw "Error. Bad operand " + pv_operator + " in unaryNode";

   return 0;
}
