/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct card {
    char *face;
    char *suit;
};

int main(void)
{
   struct card aCard;
   struct card *cardPtr;
   
   aCard.face = "Ace";
   aCard.suit = "Spades";
   
   cardPtr = &aCard;
   
   printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, "of", aCard.suit,
         cardPtr->face,"of",cardPtr->suit,
         (*cardPtr).face,"of",(*cardPtr).suit);
    return 0;
}
