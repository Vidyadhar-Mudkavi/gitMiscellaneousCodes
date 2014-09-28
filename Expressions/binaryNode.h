#ifndef _BINARYNODE_
#define _BINARYNODE_
/**

  *File: binaryNode.h

  *Description:

   this file declares class binaryNode

  *Version: 1.0

  *Dependencies:

  *Authors: Premalatha, Vidyadhar Mudkavi, CTFD, NAL

  *Date:
  */

// system includes

// local includes
#include "exprNode.h"
#include "aString.h"
#include "anExpr.h"

// const declarations

// function prototypes

// forward declarations

// begin class declaration
class binaryNode : public exprNode
{
// the handle class is a friend
   friend class anExpr;

   public:

   protected:

   private:
   // constructors
#if 0 // no default behaviour or special construction
      binaryNode(); // default
      binaryNode(const binaryNode& class_var);
#endif
   // the only constructor is
      binaryNode(const aString& op, anExpr left, anExpr right);

#if 0 // no assignment needed
   // assignment operator
      binaryNode& operator=(const binaryNode& class_var);
#endif

   // destructor
      ~binaryNode();

   // output
      void Print(ostream& os) const;

   // function to evaluate the expression
      int Evaluate() const;

   // data
      aString pv_operator;
      anExpr  pv_left;
      anExpr  pv_right;
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

#endif //_BINARYNODE_
