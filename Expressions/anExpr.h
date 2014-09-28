#ifndef _ANEXPR_
#define _ANEXPR_
/**

  *File: anExpr.h

  *Description:

   this file declares class anExpr. this is a handle class
   with use count and is capable of attaching to any object of
   the classes derived from exprNode.

  *Version: 1.0

  *Dependencies:

  *Authors: Premalatha, Vidyadhar Mudkavi, CTFD, NAL

  *Date: 27 August 1999
  */

// system includes

// local includes
#include "useCount.h"
#include "aString.h"

// const declarations
struct exprType
{
   enum expr_type
   {
      unary   = 0x01,
      binary  = 0x02,
      integer = 0x03
   };
};

// function prototypes

// forward declarations
class exprNode;

// begin class declaration
class anExpr
{
   friend class exprNode;
   friend ostream& operator<<(ostream& os, const anExpr& en);
   
   public:

   // constructors
      anExpr();                                    // default
      anExpr(const anExpr& expr);
      anExpr(int i);                               // integer expr
      anExpr(const aString& s, anExpr expr);       // unary expr
      anExpr(const aString& s,                     // binary expr
             anExpr left_expr, anExpr right_expr);

   // assignment operator
      anExpr& operator=(const anExpr& expr);

   // destructor
      ~anExpr();

   // function to evaluate the expression
      int Evaluate() const;

   protected:

   private:

   // add use counter
      useCount pv_uc;

   // the data to which this points
      exprNode* pv_en;
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

#endif //_ANEXPR_
