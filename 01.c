#include <ansi_c.h>
#include <utility.h>
#include <cvirte.h>		
#include <userint.h>
#include "01.h"

static int panelHandle, ctrlarray, ctrlarray2;

void LEDTypeLoad(void);
void LEDTypeError(void);
void Commender(void);    
//**************************************************************
int Seg_Row_Data[16][7]={
	
	{1,1,1,1,1,1,0},
	{0,1,1,0,0,0,0},
	
	{1,1,0,1,1,0,1},
	{1,1,1,1,0,0,1}, 
	
	{0,1,1,0,0,1,1},
	{1,0,1,1,0,1,1},  
	
	{1,0,1,1,1,1,1},
	{1,1,1,0,0,1,0}, 
	
	{1,1,1,1,1,1,1},
	{1,1,1,0,0,1,1}, 
	
	{1,1,1,0,1,1,1},
	{0,0,1,1,1,1,1}, 
	
	{1,0,0,1,1,1,0},
	{0,1,1,1,1,0,1}, 
	
	{1,0,0,1,1,1,1},
	{1,0,0,0,1,1,1}
	
};

      int BUTTONON=0;
	  int i=0,j=0,k=0,LED_TEMP[4]={0,0,0,0},TEMP=0,Key_Scan,deTime=0,TEMP2=0,TEMP3=0;
      int Command_SCAN=0,PASSWORD[4],START=0,ERROR=0,A=0,B=0,CommandB=0;
	  int LOSE=0;
      int ii;

int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panelHandle = LoadPanel (0, "01.uir", PANEL)) < 0)
		return -1;
	
	ctrlarray = GetCtrlArrayFromResourceID (panelHandle, CTRLARRAY);
	ctrlarray2 = GetCtrlArrayFromResourceID (panelHandle, CTRLARRAY_2);
	DisplayPanel (panelHandle);
	RunUserInterface ();
	DiscardPanel (panelHandle);
	
	
	return 0;
}

int CVICALLBACK QUIT (int panel, int control, int event,
					  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			QuitUserInterface (0);
			break;
	}
	return 0;
}


int CVICALLBACK TIMEFUNCTION (int panel, int control, int event,
							  void *callbackData, int eventData1, int eventData2)
{
	
	switch (event)
	{
		case EVENT_TIMER_TICK:



			break;
	}
	return 0;
}

int CVICALLBACK BUTTON00 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			    BUTTONON=1;
				TEMP=0 ;
				Commender();
			break;
	}
	return 0;
}

int CVICALLBACK BUTTON01 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			
			    BUTTONON=1;
				TEMP=1;
				  Commender(); 
			break;
	}
	return 0;
}

int CVICALLBACK BUTTON02 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			
			    BUTTONON=1;
				TEMP=2 ;
			
				Commender(); 
			break;
	}
	return 0;
}

int CVICALLBACK BUTTON03 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			
			    BUTTONON=1;
				TEMP=3 ;
				  Commender(); 
			break;
	}
	return 0;
}

int CVICALLBACK BUTTON04 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			    BUTTONON=1;
				TEMP=4 ;
				 Commender(); 
			break;
	}
	return 0;
}

int CVICALLBACK BUTTON05 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			    BUTTONON=1;
				TEMP=5 ;
				 Commender(); 
			break;
	}
	return 0;
}

int CVICALLBACK BUTTON06 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			    BUTTONON=1;
				TEMP=6 ;
				 Commender(); 
			break;
	}
	return 0;
}

int CVICALLBACK BUTTON07 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			    BUTTONON=1;
				TEMP=7 ;
				  Commender(); 
			break;
	}
	return 0;
}

int CVICALLBACK BUTTON08 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			    BUTTONON=1;
				TEMP=8 ;
				 Commender(); 
			break;
	}
	return 0;
}

int CVICALLBACK BUTTON09 (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			    BUTTONON=1;
				TEMP=9 ;
				Commender(); 
			break;
	}
	return 0;
}

int CVICALLBACK BUTTON0A (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			    BUTTONON=1;
				TEMP=10 ;
				 Commender(); 
			break;
	}
	return 0;
}

int CVICALLBACK BUTTON0B (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			    BUTTONON=1;
				TEMP=11;
				Commender(); 
			break;
	}
	return 0;
}

int CVICALLBACK BUTTON0C (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			    BUTTONON=1;
				TEMP=12 ;
				 Commender(); 
			break;
	}
	return 0;
}

int CVICALLBACK BUTTON0D (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			    BUTTONON=1;
				TEMP=13 ;
				 Commender(); 
			break;
	}
	return 0;
}

void LEDTypeLoad(void){
		
	int ii;
	
	Delay(0.03); 	
		
	  for (ii=0; ii < 28; ii++) //Plus
	  {
		 SetCtrlVal(panelHandle, GetCtrlArrayItem(ctrlarray, ii), 1 );
		 Delay(0.03);
		 SetCtrlVal(panelHandle, GetCtrlArrayItem(ctrlarray, ii), 0 );
	  }  
		
		
}

void LEDTypeError(void){

int Errortype[13][7]={
	
	{0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0},  
	{0,0,0,0,0,0,0},  
	{0,0,0,0,0,0,0},   
	
	{1,0,0,1,1,1,1},
	{0,0,0,0,1,0,1},  
	{0,0,0,0,1,0,1},  
	{0,0,1,1,1,0,1}, 
	{0,0,0,0,1,0,1}, 
	
	{0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0},  
	{0,0,0,0,0,0,0},  
	{0,0,0,0,0,0,0},   
	
};
int Errortemp[4]={0,0,0,0};
	int runledlow=0;
	int runledhigh=0; 
	int ie=0,ii;
	 
	int iError=0,jError=0,kError=3,deTimeError=0;
	
	while(1) {
		
	  Delay(0.03);   
		 
	 for (ie=0; ie < 4; ie++) 
	 {
	     
	 
	 if(ie==0){
	    runledlow=0;
		runledhigh=7 ;
	 }
	 if(ie==1){
	    runledlow=7;
		runledhigh=14 ;
	 }
	 if(ie==2){
	    runledlow=14;
		runledhigh=21 ;
	 }
	 if(ie==3){
	    runledlow=21;
		runledhigh=28 ;
	 }
		 
	   for (ii=runledlow; ii < runledhigh; ii++) //Plus
	   {
		 SetCtrlVal(panelHandle, GetCtrlArrayItem(ctrlarray, ii),  Errortype[ Errortemp[ie]][ii-runledlow] );
		 
		 
	   }
		 
	 }
	 
      deTimeError++;
      if(deTimeError==10){
          jError++;
	      deTimeError=0;
		  Errortemp[0]=jError;
		  Errortemp[1]=jError+1;
		  Errortemp[2]=jError+2;
		  Errortemp[3]=jError+3;
	  }
      if(jError==10)break;
      iError++;if(iError==4)i=0;
      kError--;if(kError==-1)kError=3;
	 
	}


}
void Commender(void){
int w;	
	int ij,ik;
	int runledlow=0;
	int runledhigh=0;

	   for (w=0; w < 2; w++) //Plus
	   {
		
	 for (i=0; i < 4; i++) 
	 {
	     
	 
	 if(i==3){
	    runledlow=0;
		runledhigh=7;
	 }
	 if(i==2){
	    runledlow=7;
		runledhigh=14;
	 }
	 if(i==1){
	    runledlow=14;
		runledhigh=21;
	 }
	 if(i==0){
	    runledlow=21;
		runledhigh=28;
	 }
		 
	   for (ii=runledlow; ii < runledhigh; ii++)
	   {
	     SetCtrlVal(panelHandle, GetCtrlArrayItem(ctrlarray, ii),  Seg_Row_Data[LED_TEMP[i]][ii-runledlow] );
		 
	   }
		 
	 }
							
	 if(deTime!=0)deTime--; 
     if((BUTTONON==1)&&(deTime==0)){
		 BUTTONON=0;
         deTime=0;
		
		if(TEMP<10){
            LED_TEMP[3]=LED_TEMP[2];
         	LED_TEMP[2]=LED_TEMP[1];
    	    LED_TEMP[1]=LED_TEMP[0];
			LED_TEMP[0]=TEMP;	
		}
		else{
		    Command_SCAN=TEMP;
		}
		
		if(Command_SCAN!=0){
		  if(Command_SCAN==10){// A 設定密碼 
			  
			SetCtrlAttribute (panelHandle, PANEL_TEXTMSG_4, ATTR_VISIBLE, 0);//HIDE
			SetCtrlAttribute (panelHandle, PANEL_TEXTMSG_5, ATTR_VISIBLE, 0);//HIDE 
			SetCtrlAttribute (panelHandle, PANEL_TEXTMSG_6, ATTR_VISIBLE, 0);//HIDE 
			SetCtrlAttribute (panelHandle, PANEL_TEXTMSG_7, ATTR_VISIBLE, 0);//HIDE   
			
		    START=1;
			SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_15, ATTR_DIMMED, 1);//按鍵鎖定 
			SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_12, ATTR_DIMMED, 1);//按鍵鎖定 (設定 建)
			SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_13, ATTR_DIMMED, 0);//按鍵鎖定
			SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_14, ATTR_DIMMED, 0);//按鍵鎖定
			
		    for(TEMP=0;TEMP<4;TEMP++){
		    	PASSWORD[TEMP]=LED_TEMP[TEMP];
			}
            LEDTypeLoad();
			if(LED_TEMP[3]==LED_TEMP[2])ERROR=1;
			if(LED_TEMP[3]==LED_TEMP[1])ERROR=1;
			if(LED_TEMP[3]==LED_TEMP[0])ERROR=1;
			if(LED_TEMP[2]==LED_TEMP[1])ERROR=1;
			if(LED_TEMP[2]==LED_TEMP[0])ERROR=1;
			if(LED_TEMP[1]==LED_TEMP[0])ERROR=1;
			for(k=0;k<4;k++){
				if(LED_TEMP[k]>9)ERROR=1;
			}
			if(ERROR==1){
				START=0;
				ERROR=0; 
				SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_15, ATTR_DIMMED, 0);//按鍵鎖定 
		     	SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_12, ATTR_DIMMED, 0);//按鍵鎖定 (設定 建)
			    SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_13, ATTR_DIMMED, 1);//按鍵鎖定
			    SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_14, ATTR_DIMMED, 1);//按鍵鎖定
				LEDTypeError();
								
			}
			LED_TEMP[0]=LED_TEMP[1]=LED_TEMP[2]=LED_TEMP[3]=0;
		  }
		  
		  if(Command_SCAN==13){// D 隨機密碼 
			  
			
			  
			SetCtrlAttribute (panelHandle, PANEL_TEXTMSG_4, ATTR_VISIBLE, 0);//HIDE
			SetCtrlAttribute (panelHandle, PANEL_TEXTMSG_5, ATTR_VISIBLE, 0);//HIDE 
			SetCtrlAttribute (panelHandle, PANEL_TEXTMSG_6, ATTR_VISIBLE, 0);//HIDE 
			SetCtrlAttribute (panelHandle, PANEL_TEXTMSG_7, ATTR_VISIBLE, 0);//HIDE   
			  
		    START=1;
			SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_15, ATTR_DIMMED, 1);//按鍵鎖定 
			SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_12, ATTR_DIMMED, 1);//按鍵鎖定 (設定 建)
			SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_13, ATTR_DIMMED, 0);//按鍵鎖定
			SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_14, ATTR_DIMMED, 0);//按鍵鎖定
			 LEDTypeLoad();
			while(1) 
			{  
			ERROR=0;	
		      for(TEMP=0;TEMP<4;TEMP++){
		    	PASSWORD[TEMP]=(int)(rand()%10);
			  }
            if(PASSWORD[3]==PASSWORD[2])ERROR=1;
			if(PASSWORD[3]==PASSWORD[1])ERROR=1;
			if(PASSWORD[3]==PASSWORD[0])ERROR=1;
			if(PASSWORD[2]==PASSWORD[1])ERROR=1;
			if(PASSWORD[2]==PASSWORD[0])ERROR=1;
			if(PASSWORD[1]==PASSWORD[0])ERROR=1;			//ERROR=0;
		   if(ERROR==0)break;
		
			}
			LED_TEMP[0]=LED_TEMP[1]=LED_TEMP[2]=LED_TEMP[3]=0;
		  }
		  
		  
		    if(START!=0){
			  	if(Command_SCAN==12){// C 重製
				    START=0;
				    LOSE=0;
					LED_TEMP[0]=0;
				    LED_TEMP[0]=LED_TEMP[1]=LED_TEMP[2]=LED_TEMP[3]=0;
				SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_15, ATTR_DIMMED, 0);//按鍵鎖定 	
	            SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_12, ATTR_DIMMED, 0);//按鍵鎖定 (設定 建)
			    SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_13, ATTR_DIMMED, 1);//按鍵鎖定
			    SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_14, ATTR_DIMMED, 1);//按鍵鎖定
				SetCtrlVal (panelHandle, PANEL_NUMERIC,LOSE ); 
					
				} 
			    if(Command_SCAN==11){// B 檢查 
			        CommandB=1;
			        if(LED_TEMP[3]==LED_TEMP[2])CommandB=0;
		        	if(LED_TEMP[3]==LED_TEMP[1])CommandB=0;
		        	if(LED_TEMP[3]==LED_TEMP[0])CommandB=0;
		        	if(LED_TEMP[2]==LED_TEMP[1])CommandB=0;
			        if(LED_TEMP[2]==LED_TEMP[0])CommandB=0;
			        if(LED_TEMP[1]==LED_TEMP[0])CommandB=0; 
			        for(k=0;k<4;k++){
			         	if(LED_TEMP[k]>9)CommandB=0;
			        }
			        if(CommandB==0){
						LEDTypeError();				
					    LED_TEMP[0]=LED_TEMP[1]=LED_TEMP[2]=LED_TEMP[3]=0;
						
						
					}
                if(CommandB==1){
			        if((LED_TEMP[0]==PASSWORD[0])&&(LED_TEMP[1]==PASSWORD[1])&&(LED_TEMP[2]==PASSWORD[2])&&(LED_TEMP[3]==PASSWORD[3])){
				SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_15, ATTR_DIMMED, 1);//按鍵鎖定 		
	            SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_12, ATTR_DIMMED, 1);//按鍵鎖定 (設定 建)
			    SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_13, ATTR_DIMMED, 1);//按鍵鎖定
			    SetCtrlAttribute (panelHandle, PANEL_COMMANDBUTTON_14, ATTR_DIMMED, 0);//按鍵鎖定
				
				 LED_TEMP[0]=LED_TEMP[1]=LED_TEMP[2]=LED_TEMP[3]=0;  		
						
				
				MessagePopup ("", "恭喜答對了!!!!!!!!"); 
				LOSE++;
				 SetCtrlVal (panelHandle, PANEL_NUMERIC,LOSE );    
		            }
		            else{
			            for(TEMP2=0;TEMP2<4;TEMP2++){
			                for(TEMP3=0;TEMP3<4;TEMP3++){
		    	                if(PASSWORD[TEMP2]==LED_TEMP[TEMP3]){ 
		    	                    if(TEMP2==TEMP3){
		    	                        A++;
					    		    }
					                else{
						    	      	B++;
						            }
					            } 
			                }
			            }
		                LOSE++;	
						 SetCtrlVal (panelHandle, PANEL_NUMERIC,LOSE );
						 //SetCtrlVal (panelHandle, PANEL_NUMERIC,(int)(rand()%16)+1);
						 
						 
                        if((A<4)){
						    LED_TEMP[3]=A;LED_TEMP[2]=10;LED_TEMP[1]=B;LED_TEMP[0]=11;
                            A=0;B=0;
					    }
					}
					
                }
                
            }
                if(Command_SCAN==15){//F 猜錯幾次 
					 //SetCtrlVal (panelHandle, PANEL_STRING,LOSE ); 
					 
				}
		    }	
		    Command_SCAN=0;
		}		
	} 	
		 
		 
	   }
   
}

