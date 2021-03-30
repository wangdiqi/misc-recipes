#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TutorialConfig.h"
#ifdef USE_MYMATH
#include "MathFunctions.h"
#endif

int main (int argc, char *argv[])
{
  if (argc < 2)
    {
    fprintf(stdout,"%s Version %d.%d\n", argv[0],
            Tutorial_VERSION_MAJOR,
            Tutorial_VERSION_MINOR);
    fprintf(stdout,"Usage: %s number\n",argv[0]);
    return 1;
    }

  double inputValue = atof(argv[1]);

#if defined (HAVE_LOG) && defined (HAVE_EXP)
  fprintf(stdout, "exp");
  result = exp(log(x)*0.5);
#else // otherwise use an iterative approach

#ifdef USE_MYMATH
  fprintf(stdout, "mymath\n");
  double outputValue = mysqrt1(inputValue);
#else
  fprintf(stdout, "system math");
  double outputValue = sqrt(inputValue);
#endif
#endif

  fprintf(stdout,"The square root of %g is %g\n",
          inputValue, outputValue);
  return 0;
}