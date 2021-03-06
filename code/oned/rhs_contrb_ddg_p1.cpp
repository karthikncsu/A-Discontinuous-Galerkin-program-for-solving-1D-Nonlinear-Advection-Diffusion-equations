//Function that contrubites to rhspo due to diffusive term using DDG method using p1 discretization
//-------------------------------------------------------------------------------------------------
// Cells discrption
//--------------------------------------------------------------------------------------------------
//	  Ghost								domain cells									  Ghost cells	
//	  0	  1	   2   3     4    5     6    ..................          nelem  .   nelem+1		  nelem+2         
//	|---|---|____|____|____|_____|_____|_____________________|______|_____|_____|_____|-----|-----|	
//	0   1   2	 3    4    5     6     7 .................        nelem      nelem+1     nelem+4	
//	Points location
//--------------------------------------------------------------------------------------------------

#include "functions.h"
#include "oned_header.h"

void rhs_contrb_ddg_p1()
{

double sourcediff;
	
for(int i=2;i<=nelem+1;i++)
{	
		sourcediff=4.0*unkel[i][0][1]/(coord_1d[i+1]-coord_1d[i]);
		
		rhspo[i][0][1]=rhspo[i][0][1]-coefc*sourcediff;
}			

}
