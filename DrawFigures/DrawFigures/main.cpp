#include "func.h"

void main()
{
	
	switch (ChooseFigure())
	{
	case 0: drawTriangle(); break;
	case 1: drawParallelogram();  break;
	}
}

