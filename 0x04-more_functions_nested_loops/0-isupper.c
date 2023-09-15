#include "main.h"

/**
 * _isupper -returns 1 if c is upper or 0 if c is not
 *
 * Description: C more functions
 */
int _isupper(int c)
{
	/*If loop starts here*/
	if (c <= 'A' && c >= 'Z')
	{
		return (1);
	} else 
	{
		return (0);
	}
}
