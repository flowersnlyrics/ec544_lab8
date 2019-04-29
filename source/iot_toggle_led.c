

#include "iot_toggle_led.h"

#define IOT_TOGGLE_LED_LOG "IOT TOGGLE LED: "

void iot_toggle_frdm_led(char* json)
{
	//printf("JSON in toggle function: %s %d\n", json, strlen(json));

	/*printf("Printing each char: ");
	for(int i = 0; i < strlen(json); i++)
	{
		printf("%c[%d]", json[i], i);

	}*/

	char clickType[6];
	memcpy(&clickType[0], &json[79], 1);  //[79,83]
	memcpy(&clickType[1], &json[80], 1);  //[79,83]
	memcpy(&clickType[2], &json[81], 1);  //[79,83]
	memcpy(&clickType[3], &json[82], 1);  //[79,83]
	memcpy(&clickType[4], &json[83], 1);  //[79,83]
	memcpy(&clickType[5], &json[84], 1);  //[79,83]

	if(!strncmp("DOUBLE", clickType,6)) // clickType is "DOUBLE"
	{
		//printf("%s Click type is double\n\tGREEN TOGGLE", IOT_TOGGLE_LED_LOG);
		LED_RED_OFF();
		LED_GREEN_TOGGLE();
	}
	else if(!strncmp("SINGLE", clickType,6))
	{
		//printf("%s Click type is single\n\tRED TOGGLE", IOT_TOGGLE_LED_LOG);
		//LED_RED_TOGGLE();
		LED_GREEN_OFF();
		LED_RED_TOGGLE();
	}
	else
	{
	    printf("%s Click type not recognized\n", IOT_TOGGLE_LED_LOG);
	    printf("%s %s", IOT_TOGGLE_LED_LOG, clickType);
	}

	printf("\n");
}
