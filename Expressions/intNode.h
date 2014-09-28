#ifndef _INTNODE_
#define _INTNODE_
/**

  *File: intNode.h

  *Description:

   this file declares class intNode

  *Version: 1.0

  *Dependencies:

  *Authors: Premalatha, Vidyadhar Mudkavi, CTFD, NAL

  *Date:
  */

// system includes

// local includes
#include "exprNode.h"

// const declarations

// function prototypes

// forward declarations

// begin class declaration
class intNode : public exprNode
{
// make the handle a friend
   friend class anExpr;

   private:
   // constructors
   // no default behaviour
   // no copy construction
      intNode(int n);

   // no assignment operator
   // no destructor needed

   // output
      void Print(ostream& os) const;

   // function to evaluate the expression
      int Evaluate() const;

   // data
      int pv_n;
};

// include any inline code here

/**
   declare any typedef statements here
     ex: typedef aVortex areVortices;
   so that we can declare
     areVortices v1, v2, v3;
  */
                              //                 
                              //      \\^//      
                              //     o(!_!)o     
                              // --m--  o  --m-- 
                              //                 

#endif //_INTNODE_
