
#include <iostream>
#include <stdio.h>
#include <wtypes.h>
#include "ljackuw.h"
using namespace std;
/*
DigitalIO - Reads and writes to all 20 digital I/O.
long DigitalIO (long *idnum,long demo, long *trisD, long trisIO, long *stateD, long *stateIO, long updateDigital,, long *outputD)
*/
void main()
{
long errorcode;
long idnum=-1;
long demo=0;
long stateIO=0;
long trisD=0;
long trisIO=0;
long UpdateDigital=0;
long stateD=0;
long outputD=0;

int westGreen= 32;
int westYellow= 64;
int westRed= 128;
int southGreen= 256;
int southYellow= 512;
int southRed= 1024;
int pedGreen= 2048;
int pedRed= 4096;


*&stateD=0;//set D0 and D1 which are the bits to be operated on
*&trisD=8160;//set bit D1 to be an output (all other bits are inputs)
UpdateDigital=3; //if >0 ,tris and state values will be written 
//errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);

cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
cout<<"*                                                                             *\n";
cout<<"*                 TRAFFIC  LIGHT  SIMULATION CONTROL PROJECT                   *\n"; 



Sleep(200);
*&trisD=8160;//set bit D1 to be an output (all other bits are inputs)
*&stateD=0;//set D0 and D1 which are the bits to be operated on

UpdateDigital=3;
  
for(;;)
{

{
westGreen = westGreen;
*&stateD = westGreen + southRed + pedRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

cout<<" \n";
cout<<" \n";
cout<<"                          TRAFFIC LIGHT SIMULATION \n";
cout<<" \n";

if(*&stateD==5181)
	{
	
		  Sleep(500);
		  cout<<"  "<<endl;
    
	cout<<"         >>>>>>>>-SOUTH PEDESTRIAN BUTTON HAS BEEN PRESSED FOR CROSSING-<<<<<<<\n";
	pedGreen = pedGreen;
*&stateD=  pedGreen + southRed + westGreen;// Pedestrain Light will Turn Green + southRed + westGreen
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

	}

westRed = westRed;
*&stateD = westYellow + southYellow + pedRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

if(*&stateD==4702)
	{
	
		  Sleep(200);
    cout<<"  "<<endl;
	cout<<"                 >>>>-VEHICLE  DETECTED  DETECTED ON THE EAST SIDE-<<<<<\n";

southGreen = southGreen;
*&stateD = southGreen + westRed + pedRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(600);


pedRed = pedRed;
*&stateD=  pedRed + southYellow + westYellow;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

}

southGreen = southGreen;
*&stateD = southGreen + westRed + pedRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);


pedRed = pedRed;
*&stateD=  pedRed + southYellow + westYellow;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

pedGreen = pedGreen;
*&stateD=  pedGreen + southRed + westGreen;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

pedRed = pedRed;
*&stateD =  pedRed + southYellow + westYellow ;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

southGreen = southGreen;
*&stateD = southGreen + westRed + pedRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);


if(*&stateD==4495)
	{
	
		  Sleep(200);
    cout<<"  "<<endl;
	cout<<"                 >>>>-VEHICLE  DETECTED  DETECTED ON THE WEST SIDE-<<<<<\n";

southYellow = southYellow;
*&stateD = southYellow + westYellow + pedRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

westGreen = westGreen;
*&stateD = westGreen + southRed + pedRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(600);


}



	}


westGreen = westGreen;
*&stateD = westGreen + southRed + pedRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);


if(*&stateD==5175)
	{
	
		  Sleep(200);
    cout<<"  \n"<<endl;
	cout<<"                 >>>>-VEHICLE  DETECTED DETECTED ON THE NORTH SIDE-<<<<<\n";

	pedGreen = pedGreen;
*&stateD=  pedRed + southYellow + westYellow;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

*&stateD=  pedRed + southGreen + westRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

*&stateD=  pedRed + southYellow + westYellow;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

*&stateD=  pedGreen + southRed + westGreen;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);


westYellow = westYellow;
*&stateD = westYellow + southYellow + pedRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

}

if(*&stateD==5179)
	{
	
		  Sleep(200);
		  
	cout<<"                 >>>>- VEHICLE  DETECTED ON THE SOUTH SIDE-<<<<<\n";
pedRed = pedRed;
*&stateD=  pedRed + southGreen + westRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);


pedRed = pedRed;
*&stateD=  pedRed + southYellow + westRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

pedGreen = pedGreen;
*&stateD=  pedGreen + southRed + westRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

pedRed = pedRed;
*&stateD=  pedRed + southYellow + westRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

	}


pedRed = pedRed;
*&stateD=  pedRed + southGreen + westRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);


pedGreen= pedGreen;
*&stateD=  pedGreen + southYellow + westYellow;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);


pedRed = pedRed;
*&stateD=  pedGreen + southRed + westGreen ;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

pedGreen = pedGreen;
*&stateD=  pedGreen + southRed + westGreen ;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);
cout<<" \n";


if(*&stateD==4702)
	{
	
		  Sleep(200);
    cout<<"  \n"<<endl;
	cout<<"\n";

	pedGreen = pedGreen;
*&stateD=  pedGreen + southRed + westRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

pedGreen = pedGreen;
*&stateD=  pedRed + southYellow + westRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

pedGreen = pedGreen;
*&stateD=  pedRed + southGreen + westRed;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

pedGreen = pedGreen;
*&stateD=  pedRed + southYellow + westYellow;
errorcode = DigitalIO(&idnum,demo, &trisD, trisIO, &stateD, &stateIO, UpdateDigital, &outputD);
Sleep(500);

	}}}


