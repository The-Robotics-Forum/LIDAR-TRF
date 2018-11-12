/*
 * GccApplication18.cpp
 *
 * Created: 12-11-2018 16:32:53
 * Author : USER
 */ 

#include <m2560/io.h>
uint16_t lidarRecieve()
{uint8_t x=0,ld,lh;
	uint16_t dist;
	while(x<=8)
	{if(Serial.available())
		{if(x==2)
			lh=Serial.read();
			if(x==3)
			ld=Serial.read();
			x++;
		}
	}
	Serial.flush();
	dist=(8<<lh)+ld;
	return dist;

}
