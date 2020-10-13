/*******************************************************/
/*             Seven Segment Driver                    */                          
/*                                                     */
/*   Author	: Khaled Talaat El-Zeiny                   */ 
/* Version	: V01                                      */ 
/* Datee 	: 14 August 2020                           */ 
/*******************************************************/

#ifndef SEG_CONFIG_H
#define SEG_CONFIG_H

/*            7 Segment Pins Definition 

 You Must Define pins using this format by naming The ***PORT,PINNUMBER***

Example : 

#define	 Seg_a		GPIOA,Pin0
#define	 Seg_b		GPIOA,Pin1
#define	 Seg_c		GPIOA,Pin2
#define	 Seg_d		GPIOA,Pin3
#define	 Seg_e		GPIOA,Pin4
#define	 Seg_f		GPIOA,Pin5
#define	 Seg_g		GPIOA,Pin6

*/

#define	 SEG_A		GPIOA,PIN0
#define	 SEG_B		GPIOA,PIN1
#define	 SEG_C		GPIOA,PIN2
#define	 SEG_D		GPIOA,PIN3
#define	 SEG_E		GPIOA,PIN4
#define	 SEG_F		GPIOA,PIN5
#define	 SEG_G		GPIOA,PIN6
#define  SEG_DOT    GPIOA,PIN7

/* 		Defining the Mode of the 7Segment		*/
/* The Mode Must be One of two  1- Common Anode 
								2- Common Cathode

*/
#define	  SEG_MODE  Common_Cathode

/*    Set Port of the 7Segment 
Options : 	1-GPIOA
			2-GPIOB
		
			*/
#endif
