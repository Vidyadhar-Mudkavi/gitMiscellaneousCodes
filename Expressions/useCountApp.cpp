/**

  *File: useCountApp.cpp

  *Description:

   this file test drives objects of type useCount
   defined in file useCount.h

   actually, there is no direct use for useCount objects.
   they are used as part of handles. 

   to test this out, we will use the example stated in chapter 8
   of Koenig and Moo.

  *Version: 1.0

  *Dependencies:

  *Authors: Premalatha, Vidyadhar Mudkavi, CTFD, NAL

  *Date:
  */

// system includes
#include <iostream.h>

// local includes
#include ".\ExprExample\anExpr.h"
#include "cpuClock.h"

// const declarations

// function prototypes

// forward declarations

int main(int argc, char* argv[])
{
// store the invoking program name
   char* prg_name = argv[0];

// create an object of cpuClock and start it
   cpuClock clock;
   clock.Start();

// create expressions and print them out
   anExpr t;
   t = anExpr("*", anExpr("-", 5), anExpr("+", 3, 2));

   cout << t << endl;
   cout << t.Evaluate() << endl;

   t = anExpr("*", t, t);
   cout << t << endl;
   cout << t.Evaluate() << endl;

   try
   {
      t = anExpr("*", 5);
      cout << t << endl;
      cout << t.Evaluate() << endl;
   }
   catch (aString error)
   {
      cout << error << endl;
   }

// build an expression using exprType
   anExpr ue(exprType::unary);

   cout << "a default unary expression: " << endl 
        << ue << endl;

// stop the clock and display cpu time
   clock.Stop();
   clock.Display();

// write a closure message and finish the program
   cout << "Program <"
        << prg_name
        << "> completed successfully :-)"
        << endl;
   return 0;
}
