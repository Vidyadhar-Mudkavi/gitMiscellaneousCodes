/**

  *File: intNode.cpp

  *Description:

   this file implements the class intNode

  *Version: 1.0

  *Dependencies:

  *Authors: Premalatha, Vidyadhar Mudkavi, CTFD, NAL

  *Date:
  */

// system includes

// local includes
#include "intNode.h"

// const declarations

// function prototypes

// forward declarations

// begin class implementation
   ////////////////////////////////////////
   //                                      
   //    implement constructors here       
   //                                      
   //                                      

#if 0 // has no default behaviour
/**
   default constructor
  */
intNode::intNode()
{
}
#endif

intNode::intNode(int n)
   : pv_n(n)
{
}

#if 0 // no copy constructor
/**
   copy constructor
  */
intNode::intNode(const intNode& in)
   : pv_n(in.pv_n)
{
}
#endif

#if 0 // no assignment is needed
   ////////////////////////////////////////
   //                                      
   //    implement assignment operators    
   //                                      
   //                                      

intNode& intNode::operator=(const intNode& in)
{

   return *this;
}
#endif

#if 0 // no destructor necessary
   ////////////////////////////////////////
   //                                      
   //    implement the destructor          
   //                                      
   //                                      

intNode::~intNode()
{
}
#endif

   ////////////////////////////////////////////
   //                                          
   //   implement other member functions here  
   //                                          
   //                                          

/**
   printing or output routine
  */
void intNode::Print(ostream& os) const
{
   os << pv_n;
}

/**
   function to evaluate the expression
  */

int intNode::Evaluate() const
{
   return pv_n;
}
