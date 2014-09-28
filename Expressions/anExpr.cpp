/**

  *File: anExpr.cpp

  *Description:

   this file implements the class anExpr

  *Version: 1.0

  *Dependencies:

  *Authors: Premalatha, Vidyadhar Mudkavi, CTFD, NAL

  *Date: 27 August 1999
  */

// system includes

// local includes
#include "anExpr.h"
#include "intNode.h"
#include "unaryNode.h"
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

/**
   default constructor
  */
anExpr::anExpr()
   : pv_en(0)
{
}

/**
   copy constructor
  */
anExpr::anExpr(const anExpr& expr)
   : pv_en(expr.pv_en), pv_uc(expr.pv_uc)
{
}


/**
   constructor to create integer node
  */
anExpr::anExpr(int n)
{
   if ( n == exprType::unary)
   {
      pv_en = new unaryNode("-", 0);
      return;
   }

   pv_en = new intNode(n);
}

/**
  */
anExpr::anExpr(const aString& op, anExpr e)
{
   pv_en = new unaryNode(op, e);
}

/**
  */
anExpr::anExpr(const aString& op, anExpr left, anExpr right)
{
   pv_en = new binaryNode(op, left, right);
}


   ////////////////////////////////////////
   //                                      
   //    implement assignment operators    
   //                                      
   //                                      

anExpr& anExpr::operator=(const anExpr& expr)
{
   if ( pv_uc.isAttachingTo(expr.pv_uc) )
   {
      // delete data contained in the handle
      delete pv_en;
   }

   pv_en = expr.pv_en;

   return *this;
}

   ////////////////////////////////////////
   //                                      
   //    implement the destructor          
   //                                      
   //                                      

anExpr::~anExpr()
{
   if ( pv_uc.isOnlyInstance() )
   {
      delete pv_en;
   }
}

   ////////////////////////////////////////////
   //                                          
   //   implement other member functions here  
   //                                          
   //                                          

/**
   the output is handled directly by the handles
  */
ostream& operator<<(ostream& os, const anExpr& en)
{
   en.pv_en->Print(os);
   return os;
}


/**
   this function evaluates the expression
  */
int anExpr::Evaluate() const
{
   return pv_en->Evaluate();
}
