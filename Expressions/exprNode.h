#ifndef _EXPRNODE_
#define _EXPRNODE_
/**

  *File: exprNode.h

  *Description:

   this file declares class exprNode. this example
   is from "Ruminations on C++" by Koenig and Moo, Chapter 8.

   this is an abstract class and hence has no implementation.

  *Version: 1.0

  *Dependencies:

  *Authors: Premalatha, Vidyadhar Mudkavi, CTFD, NAL

  *Date: 27 august 1999
  */

// system includes
#include <iostream.h>

// local includes

// const declarations

// function prototypes

// forward declarations
class anExpr;

// begin class declaration
class exprNode
{
// the handle class is a friend
   friend class anExpr;
   friend ostream& operator<<(ostream&, const anExpr&);
 
   public:

   protected:

   // constructors
      exprNode(); // default

   // destructor
      virtual ~exprNode();

   // a print function to display the object
      virtual void Print(ostream& os) const = 0;

   // function to evaluate the expression
      virtual int Evaluate() const = 0;

   private:
   // constructors not implemented
      exprNode(const exprNode& en);

   // assignment operator not implemented
      exprNode& operator=(const exprNode& en);

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

#endif //_EXPRNODE_
