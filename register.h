
/**************************************************************
； File Name  : register.h
； Originator :	Texas Instrument-Chongqing University DSPs Lab.
； Description:	F240 Peripheral Registers + other useful definitions	
；**************************************************************/
/*--------------------------------------------------------------
； 片内外围寄存器定义
；--------------------------------------------------------------*/
/*C2xx 内核寄存器
；~~~~~~~~~~~~~~~~~~~~*/
#define   IMR    (volatile unsigned int   *) 0x0004 
/*中断屏蔽寄存器*/
#define   GREG   (volatile unsigned int   *) 0x0005  
/*全局变量定位寄存器*/	
#define   IFR  (volatile unsigned int   *) 0x0006  
/*中断标志寄存器*/                                            

ioport   unsigned portFFFF; 	
#define  WSGR	  portFFFF
/*系统模块寄存器						
；~~~~~~~~~~~~~~~~~~~~~~~*/						

#define     SYSCR 	  (volatile unsigned int   *) 0x7018 
/* 系统控制和状态寄存器1*/
#define     SYSSR 	  (volatile unsigned int   *) 0x701A 
/* 系统控制和状态寄存器2*/
#define     SYSIVR   (volatile unsigned int   *) 0x701E 
/* 外围中断向量寄存器*/
/*看门狗/ 实时中断(RTI*)  锁相环 (PLL*)  寄存器
；~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#define    RTICNTR   (volatile unsigned int   *) 0x7021 
/*实时中断计数寄存器*/
#define     WDCNTR   (volatile unsigned int   *) 0x7023 
/*看门狗计数寄存器*/
#define     WDKEY  (volatile unsigned int   *) 0x7025 	

/* 看门狗 Key 寄存器*/
#define    RTICR   (volatile unsigned int   *) 0x7027 
/*实时中断控制寄存器*/
#define     WDCR 	  (volatile unsigned int   *) 0x7029 
/* 看门狗控制寄存器*/ 
#define    CKCR0   (volatile unsigned int   *) 0x702B 
#define    CKCR1   (volatile unsigned int   *) 0x702D 
/*外围串行接口(SPI*) 寄存器
；~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#define     SPICCR   (volatile unsigned int   *) 0x7040 
/* SPI配置控制寄存器1*/
#define     SPICTL   (volatile unsigned int   *) 0x7041 
/* SPI 运行控制寄存器2*/
#define     SPISTS 	  (volatile unsigned int   *) 0x7042 
/* SPI 状态寄存器*/
#define     SPIBRR 	  (volatile unsigned int   *) 0x7044 
/* SPI 波特率控制寄存器*/
#define     SPIEMU 	  (volatile unsigned int   *) 0x7046 
/* SPI 仿真缓冲寄存器*/
#define     SPIRXBUF	  (volatile unsigned int   *) 0x7047 
/* SPI 串行输入缓冲寄存器*/
#define     SPITXBUF	  (volatile unsigned int   *) 0x7048 
/* SPI 串行输出缓冲寄存器*/
#define     SPIDAT 	  (volatile unsigned int   *) 0x7049 
/* SPI 串行数据寄存器*/
#define     SPIPC1 	  (volatile unsigned int   *) 0x704D 
/* SPI 端口控制寄存器1*/
#define     SPIPC2 	  (volatile unsigned int   *) 0x704E 
/* SPI端口控制寄存器2*/
#define     SPIPRI 	  (volatile unsigned int   *) 0x704F 
/* SPI 优先级控制寄存器*/
/* 串行通信接口寄存器
；~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#define     SCICCR  (volatile unsigned int  *) 0x7050 
/* SCI 通讯控制寄存器*/
#define     SCICTL1 	  (volatile unsigned int   *) 0x7051 
/* SCI 控制寄存器1*/
#define     SCIHBAUD	  (volatile unsigned int   *) 0x7052 
/* SCI 波特率控制寄存器高位*/
#define     SCILBAUD	  (volatile unsigned int   *) 0x7053 
/* SCI 波特率控制寄存器低位*/
#define     SCICTL2 	  (volatile unsigned int   *) 0x7054 
/* SCI 控制寄存器2*/
#define     SCIRXST 	  (volatile unsigned int   *) 0x7055 
/* SCI 接收状态寄存器*/
#define     SCIRXEMU	  (volatile unsigned int   *) 0x7056 
/* SCI EMU 数据缓冲寄存器*/
#define     SCIRXBUF  (volatile unsigned int   *) 0x7057 
/* SCI 接收数据缓冲寄存器*/
#define     SCITXBUF  (volatile unsigned int   *) 0x7059 
/* SCI发送数据缓冲寄存器*/
#define    SCIPC2   (volatile unsigned int   *) 0x705E 
#define     SCIPRI   (volatile unsigned int   *) 0x705F 	
/* SCI 优先级控制寄存器*/
/* 外围中断配置寄存器
；~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#define     XINT1CR 	  (volatile unsigned int   *) 0x7070 
/* Int1 配置寄存器*/
#define    NMICR      (volatile unsigned int   *) 0x7072 
#define     XINT2CR 	  (volatile unsigned int   *) 0x7078 	
/* Int2 配置寄存器*/
#define    XINT3CR    (volatile unsigned int   *) 0x707A 
/* 数字 I/O 控制寄存器。
；~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#define     OCRA 	  (volatile unsigned int   *) 0x7090 	
/* I/O 复用控制寄存器A*/ 
#define     OCRB 	  (volatile unsigned int   *) 0x7092 
/* I/O 复用控制寄存器B*/

#define     PADATDIR     (volatile unsigned int   *) 0x7098 
/* I/O 端口 A 数据和方向控制寄存器*/ 
#define     PBDATDIR	  (volatile unsigned int   *) 0x709A 
/* I/O 端口 B 数据和方向控制寄存器*/
#define     PCDATDIR	  (volatile unsigned int   *) 0x709C 
/* I/O 端口 C 数据和方向控制寄存器*/

/*ADC 寄存器定义
；--------------------------------------------------------------*/
#define      ADCTRL1 	  (volatile unsigned int   *) 0x7032 
/* ADC控制寄存器1*/
#define      ADCTRL2 	  (volatile unsigned int   *) 0x7034 
/* ADC控制寄存器2*/ 
#define    ADCFIFO1   (volatile unsigned int   *) 0x7036 
#define    ADCFIFO2   (volatile unsigned int   *) 0x7038 

/*事件管理器 (EV*) 事件管理器 A (EVA*)  寄存器
；~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#define     GPTCON      (volatile unsigned int   *) 0x7400 
/* 通用定时器控制寄存器*/
#define     T1CNT 	  (volatile unsigned int   *)  0x7401 	
/* T1 计数器*/
#define     T1CMPR 	  (volatile unsigned int   *) 0x7402 
/* T1 比较值寄存器*/
#define     T1PR 	  (volatile unsigned int   *) 0x7403 	
/* T1 周期寄存器*/
#define     T1CON 	  (volatile unsigned int   *) 0x7404 
/* T1 控制寄存器*/
#define     T2CNT 	  (volatile unsigned int   *) 0x7405 	
/* T2 计数器*/
#define     T2CMPR 	  (volatile unsigned int   *) 0x7406 
/* T2 比较值寄存器*/
#define     T2PR 	  (volatile unsigned int   *) 0x7407 	
/* T2 周期寄存器*/
#define     T2CON 	  (volatile unsigned int   *) 0x7408 
/* T2 控制寄存器*/
#define    T3CNT   (volatile unsigned int   *) 0x7409 
#define    T3CMPR   (volatile unsigned int   *) 0x740A 
#define    T3PR   (volatile unsigned int   *) 0x740B 
#define    T3CON   (volatile unsigned int   *) 0x740C 
#define     COMCON 	  (volatile unsigned int   *) 0x7411 	
/* 比较控制寄存器*/
#define     ACTR 	  (volatile unsigned int   *) 0x7413 	
/* 比较输出动作控制寄存器*/
#define    SACTR   (volatile unsigned int   *) 0x7414 
#define     DBTCON	  (volatile unsigned int   *) 0x7415 
/* 死区控制寄存器*/
#define    CMPR1 	  (volatile unsigned int   *) 0x7417 
/* 比较值1*/
#define    CMPR2 	  (volatile unsigned int   *) 0x7418 
/* 比较值2*/
#define    CMPR3 	  (volatile unsigned int   *) 0x7419 
/* 比较值3*/
#define    SCMPR1   (volatile unsigned int   *) 0x741A 
#define    SCMPR2   (volatile unsigned int   *) 0x741B 
#define    SCMPR3   (volatile unsigned int   *) 0x741C 
#define    CAPCON 	  (volatile unsigned int   *) 0x7420 	
/* 捕捉控制寄存器*/
#define    CAPFIFO	  (volatile unsigned int   *) 0x7422 	
/* 捕捉 FIFO A 状态寄存器*/
#define    CAP1FIFO	  (volatile unsigned int   *) 0x7423 	
/* 捕捉1 FIFO 顶部*/
#define    CAP2FIFO	  (volatile unsigned int   *) 0x7424 	
/* 捕捉 2 FIFO 顶部*/
#define    CAP3FIFO	  (volatile unsigned int   *) 0x7425 	
/* 捕捉 3 FIFO 顶部*/
#define    CAP4FIFO   (volatile unsigned int   *) 0x7426 

#define    EVIMRA	  (volatile unsigned int   *) 0x742C 	
/* EVA 中断屏蔽寄存器 A*/
#define    EVIMRB	  (volatile unsigned int   *) 0x742D 	
/* EVA中断屏蔽寄存器 B*/
#define    EVIMRC	  (volatile unsigned int   *) 0x742E 	
/* EVA 中断屏蔽寄存器 C*/
#define     EVIFRA	  (volatile unsigned int   *) 0x742F 	
/* EVA中断标志寄存器 A*/
#define     EVIFRB	  (volatile unsigned int   *) 0x7430 	
/* EVA 中断标志寄存器 B*/
#define     EVIFRC	  (volatile unsigned int   *) 0x7431 	
/* EVA中断标志寄存器 C*/
#define    EVIVRA   (volatile unsigned int   *) 0x7432 
#define    EVIVRB   (volatile unsigned int   *) 0x7433 
#define    EVIVRC   (volatile unsigned int   *) 0x7434 
/*FLASH MODULE REGISTERS(MAPPED INTO PROGRAM SPACE*) 

-----------------------------------------------------------------------------*/
#define    SEG_CTR   (volatile unsigned int   *) 0x0000 
/*FLASH SEGMENT CONTROL REGISTER*/
#define    WADRS   (volatile unsigned int   *) 0x0002 
/*FLASH WRITE ADDRESS REGISTER*/
#define    WDATA   (volatile unsigned int   *) 0x0003 
/*FLASH WRITE DATA REGISTER*
；常量的定义
；-----------------------------------------------------------------------------
；数据空间
；~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#define		B2_SADDR	0x0060	/*块 B2 的开始地址*/
#define		B2_EADDR	0x007F	/*块 B2 的结束地址*/
#define		B0_SADDR	0x0200	/*块 B0 的开始地址*/
#define		B0_EADDR	0x02FF	/*块 B0 的结束地址*/
#define		B1_SADDR	0x0300	/*块 B1 的开始地址*/
#define		B1_EADDR	0x03FF	/*块 B1 的结束地址*/
#define		SARAM		0x0800	/*SARAM 的开始地址(0800h-0FFFh*) */
#define		EXTDATA		0x8000	/*外部的数据空间的开始地址*/
/*经常用到的数据页
；~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#define		DP_B2		0	/*页 0  数据空间*/
#define		DP_B01		4	/*页 4  B0(200H/80H*) */	
#define		DP_B02		5	/*页 5  B0(280H/80H*) */	
#define		DP_B11		6	/*页 6  B1(300H/80H*) */	
#define		DP_B12		7	/*页 7  B1(380H/80H*) */
#define		DP_SARAM1    16	/*页 16 SARAM(800H/80H*) */
#define		DP_PF1	     224     /*页1 外设帧文件 (7000h/80h*) (0XE0*) */
#define		DP_PF2	     225    /*页 2 外设帧文件 (7080h/80h*) (0XE1*) */
#define		DP_PF3	     226    /*页 3 外设帧文件 (7100h/80h*) (0XE2*) */

#define		DP_EV	     232	/*EVA 寄存器文件 (7400h/80h*) (0XE8*) */

/*位测试指令的位代码(BIT*) 
；~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#define		BIT15		0	/*位代码 15*/
#define		BIT14		1	/*位代码14*/
#define		BIT13		2	/*位代码13*/
#define		BIT12		3	/*位代码12*/
#define		BIT11		4	/*位代码11*/
#define		BIT10		5	/*位代码10*/
#define		BIT9		6	/*位代码9*/
#define		BIT8		7	/*位代码8*/
#define		BIT7		8	/*位代码7*/
#define		BIT6		9	/*位代码6*/
#define		BIT5		10	/*位代码5*/
#define		BIT4		11	/*位代码4*/
#define		BIT3		12	/*位代码3*/
#define		BIT2		13	/*位代码2*/
#define		BIT1		14	/*位代码1*/
#define		BIT0		15	/*位代码0*/
/*用SBIT0和SBIT1宏屏蔽位
；~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#define		B15_MSK		0x8000	/*位屏蔽15*/
#define		B14_MSK		0x4000	/*位屏蔽14*/
#define		B13_MSK		0x2000	/*位屏蔽13*/
#define		B12_MSK		0x1000	/*位屏蔽12*/
#define		B11_MSK		0x0800	/*位屏蔽11*/
#define		B10_MSK		0x0400	/*位屏蔽10*/
#define		B9_MSK		0x0200	/*位屏蔽9*/
#define		B8_MSK		0x0100	/*位屏蔽8*/
#define		B7_MSK		0x0080	/*位屏蔽7*/
#define		B6_MSK		0x0040	/*位屏蔽6*/
#define		B5_MSK		0x0020	/*位屏蔽5*/
#define		B4_MSK		0x0010	/*位屏蔽4*/
#define		B3_MSK		0x0008	/*位屏蔽3*/
#define		B2_MSK		0x0004	/*位屏蔽2*/
#define		B1_MSK		0x0002	/*位屏蔽1*/
#define		B0_MSK		0x0001	/*位屏蔽0*/
/*看门狗定时器复位字符串 
；~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#define		wd_rst_1	0x0055
#define		wd_rst_2	0x00AA
/*以下为用户自行定义的变量
；~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

