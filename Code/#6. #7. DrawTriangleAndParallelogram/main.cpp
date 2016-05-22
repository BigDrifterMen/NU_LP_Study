/*
DRAWING TRIANGLE AND PARALLELOGRAM PROGRAM

Task:
Create geometic figures (triangle and parallelogram) by using symbol '*'. 

Student:
Vilkovych Svyatoslav

Examples:
Triange (high = 4), Parallelogram (high = 4, length = 7)

   *                     *******
  * *                   *     *
 *   *                 *     *
*******               *******

*/

#include "func.h"

void main()
{
	// In that case, you can easily add new figures.
	switch (ChooseFigure())
	{
	case 0: drawTriangle(); break;
	case 1: drawParallelogram();  break;
	}
}

