/**********************************************************************************
 * 
 * File Name:   gpioHelper.h
 * 
 * Author Name: E. Tucker
 *
 * Description: This is the header file for the GPIO helper file for the cluster
 *               comunication.
 *
 * Change Log:  This is in a git repo so there is no change log.
 *
 ******************************************************************************/
#ifndef GIOPHELPER_H
#define GIOPHELPER_H

void gpioExport( int pin );
void gpioDirection( int pin, const char* dir );
void gpioWrite( int pin, int val );
void gpioRead( int pin );

#endif
