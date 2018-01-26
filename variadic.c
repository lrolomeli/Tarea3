/*
 * variadic.c
 *
 *  Created on: Jan 23, 2018
 *      Author: lrolo
 */

#include "variadic.h"

double sum_task(int number_args, ...)
{
	va_list arguments_list;				/*lista de argumentos*/
	static int arguments = 0;		/*variable para el ciclo for*/
	double addition = 0;				/*la suma de los argumentos*/

    /* Requires the last fixed parameter (to get the address) */
    va_start(arguments_list, number_args);

    for (arguments = 0; arguments < number_args; arguments++)
    {
    	/* Increments arguments_list to the next argument. */
        addition += (double)va_arg(arguments_list, int);
    }
    va_end(arguments_list);

    return addition;
}
