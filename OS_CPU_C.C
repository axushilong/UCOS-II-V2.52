   #define  OS_CPU_GLOBALS
   #include "includes.h"
  /* extern  INT16U  c_int0;  */
OS_STK *OSTaskStkInit (void (*task)(void *pd), void *pdata, OS_STK *ptos, INT16U opt)
{
        
        INT16U  *stk;
  
        opt=opt;
        
        stk=(INT16U*)ptos;
       
        *stk++ = (INT16U) pdata;   	/* arg 0 								*/
        stk++;				/* next word for use.  Task assembly code will pop return address to here.		*/
        *stk++ = (INT16U) 0x21EC;	/* ST1 =21ECh; ARB = AR1.*/
        *stk++ = (INT16U) 0x2600;	/* ST0 =2600h; AR1 is current Aux. Reg, Interrupts are disabled, DP is zero. */
        *stk++ = (INT16U) 0x0000;	/* Accumulator high is 0 */
        *stk++ = (INT16U) 0x0000;	/* Accumulator low is 0. */
	    *stk++ = (INT16U) 0x0000;	/* Product High is 0.    */
	    *stk++ = (INT16U) 0x0000;	/* T is 0.		 */
	    *stk++ = (INT16U) 0x0000;	/* Product Low is 0.   	 */
	    ptos=stk;
        *stk++ = (INT16U) 0x0000;	/* AR0 = 0.     */
        *stk++ = (INT16U) 0x0000;	/* AR2 = 0 	*/
        *stk++ = (INT16U) 0x0000;	/* AR3 = 0 	*/
        *stk++ = (INT16U) 0x0000;	/* AR4 = 0 	*/
        *stk++ = (INT16U) 0x0000;	/* AR5 = 0 	*/
        *stk++ = (INT16U) 0x0000;	/* AR6 = 0 	*/
        *stk++ = (INT16U) 0x0000;	/* AR7 = 0 	*/
        *stk++ = (INT16U) task;  	/* Interrupt return address = start of task */
        /**stk++ = (INT16U) c_int0;
        *stk++ = (INT16U) c_int0;
        *stk++ = (INT16U) c_int0;
        *stk++ = (INT16U) c_int0;  	/* Initialize the h/w stack.			*/
        /**stk++ = (INT16U) c_int0;
        *stk++ = (INT16U) c_int0;	/* reset if an unbalanced return.		*/ 
        stk+=6;
        * (INT16U *)ptos=(INT16U)stk;	/* now set frame pointer.			*/
        return ((OS_STK *)stk);
 }      


#if OS_CPU_HOOKS_EN

void OSTaskCreateHook (OS_TCB *ptcb)
{
    ptcb = ptcb;                       /* Prevent compiler warning                                     */
}


void OSTaskDelHook (OS_TCB *ptcb)
{
    ptcb = ptcb;                       /* Prevent compiler warning                                     */
}


void OSTaskSwHook (void)
{
}

void OSTaskIdleHook(void)
{
  
 /* printf("This is Idletask.\n");  
  printf("OSIdleCtr is %ld\n",OSIdleCtr); */
}
void OSTaskStatHook (void)
{
}


void OSTimeTickHook (void)
{
}
void OSInitHookBegin(void)
{
}
void OSInitHookEnd(void)
{
}

void OSTCBInitHook(OS_TCB *ptcb)
{
  ptcb=ptcb;
}
#endif     


