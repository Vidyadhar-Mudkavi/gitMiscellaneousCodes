#ifndef _UNARYNODE_
#define _UNARYNODE_
/**

  *File: unaryNode.h

  *Description:

   this file declares class unaryNode

  *Version: 1.0

  *Dependencies:

  *Authors: Premalatha, Vidyadhar Mudkavi, CTFD, NAL

  *Date:
  */

// system includes

// local includes
#include "anExpr.h"
#include "exprNode.h"
#include "aString.h"

// const declarations

// function prototypes

// forward declarations

// begin class declaration
class unaryNode : public exprNode
{
// make the handle a friend
   friend class anExpr;

   public:

   protected:

   private:

   // constructors
#if 0 // no default behaviour
      unaryNode(); // default
#endif

#if 0 // both special construction and assignment are not needed
      unaryNode(const unaryNode& un);

   // assignment operator
      unaryNode& operator=(const unaryNode& un);
#endif

   // this is the one invoked by anExpr (handle)
      unaryNode(const aString& op, anExpr expr);

   // destructor
      ~unaryNode();

   // output
      void Print(ostream& os) const;

   // function to evaluate the expression
      int Evaluate() const;

   // data
      aString pv_operator;
      anExpr  pv_operand;
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

#endif //_UNARYNODE_
