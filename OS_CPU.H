        
#ifdef  OS_CPU_GLOBALS
#define OS_CPU_EXT
#else
#define OS_CPU_EXT  extern
#endif
 
typedef unsigned int  BOOLEAN;
typedef unsigned int  INT8U;                    /* Unsigned  8 bit quantity, but on f240 it is actually 16 bit */
typedef signed   int  INT8S;                    /* Signed    8 bit quantity, but on f240 it is actually 16 bit */
typedef unsigned int  INT16U;                   /* Unsigned 16 bit quantity                           */
typedef signed   int  INT16S;                   /* Signed   16 bit quantity                           */
typedef unsigned long INT32U;                   /* Unsigned 32 bit quantity                           */
typedef long  	      INT32S;                   /* Signed   32 bit quantity                           */
typedef float         FP32;                     /* Single precision floating point                    */
typedef double        FP64;                     /* Double precision floating point                    */

typedef unsigned int   OS_STK;                   /* Each stack entry is 16-bit wide                    */
typedef unsigned int OS_CPU_SR;                  /*define cup status register is 16b wide              */

#define BYTE           INT8S                     /* Define data types for backward compatibility ...   */
#define UBYTE          INT8U                     /* ... to uC/OS V1.xx.  Not actually needed for ...   */
#define WORD           INT16S                    /* ... uC/OS-II.                                      */
#define UWORD          INT16U
#define LONG           INT32S
#define ULONG          INT32U

#define  OS_CRITICAL_METHOD 1
#if      OS_CRITICAL_METHOD==1                   /*another two method are not define*/
#define	OS_ENTER_CRITICAL()	asm(" SETC INTM")
#define	OS_EXIT_CRITICAL()	asm(" CLRC INTM")
#endif                                                                                

#define  OS_STK_GROWTH        0                  /* Stack grows from HIGH to LOW memory on 80x86  */
#define  OS_TASK_SW()        asm(" INTR 31")

