/*
			IR Driver 
			
Name 	: Khaled Talaat El-Zeiny
Version : V02
Date    : 9/10/2020

*/


		/*Functions Prototypes*/
void voidTakeAction(void);
void voidGetFrame(void);
void IR_voidSetCallBack(void (*Copy_u8Ptr)(u8 Data));
void IR_voidInit(void);

		/*Buttons Definitions*/
#define REMOTE_POWERON 			69
#define REMOTE_MODE				70
#define REMOTE_MUTE				71
#define REMOTE_STOP_PLAY		68
#define REMOTE_FORWARD			67
#define REMOTE_BACKWARD			64
#define REMOTE_EQ				7
#define REMOTE_VOLUP			9
#define REMOTE_VOLDOWN			21
#define REMOTE_RPT				25
#define REMOTE_USD				13
#define REMOTE_NUM0				22
#define REMOTE_NUM1				12
#define REMOTE_NUM2				24
#define REMOTE_NUM3				94
#define REMOTE_NUM4				8
#define REMOTE_NUM5				28
#define REMOTE_NUM6				90
#define REMOTE_NUM7				66
#define REMOTE_NUM8				82
#define REMOTE_NUM9				74
