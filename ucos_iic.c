/*
*********************************************************************************************************
*                                                uC/OS-II
*                                          The Real-Time Kernel
*
*                          (c) Copyright 1992-2002, Jean J. Labrosse, Weston, FL
*                                           All Rights Reserved
*
* File : uCOS_II.C
* By   : Jean J. Labrosse
*********************************************************************************************************
*/

#include "includes.h"


#define  OS_MASTER_FILE                       /* Prevent the following files from including includes.h */
#include "os_mutex.c"
#include "os_q.c"
