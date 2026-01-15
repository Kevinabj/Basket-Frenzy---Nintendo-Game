#include "P_Controls.h"

void handleTouchPad()
{
    // Read the touch position.
	touchPosition touch;
	touchRead(&touch);

	//Only if px or py are different to 0 handle the touch
	if(touch.px || touch.py)
	{
		//Rotation
		if(touch.px > 170 && touch.px < 256)
		{
			if(touch.py > 0 && touch.py < 96){}

			else{}

		}
		//Lateral movement
		else if(touch.px > 85 && touch.px < 170)
		{
			if(touch.py > 0 && touch.py < 96){}

			else{}


		}
		//Block fall down
		else if(touch.px > 0 && touch.px < 85)
		{

		}
	}
}


/*
 * This function handles the input by monitoring the keys and the touchscreen
 * and invoking the function Gameplay_HandleInput(...) with the correct input
 * value
 */
void handleInput()
{
	//Scan the keys
	scanKeys();

	/* Identify the keys and map the action according to the table given in
	 * the manual. Call the function Gameplay_handleInput(..) to send an action
	 * to the logic of the game */
	u16 keys = keysDown();
    if(keys & KEY_A) {}
    else if(keys & KEY_LEFT){}

    else if(keys & KEY_RIGHT){}

    else if (keys & KEY_UP){}

    else if (keys & KEY_DOWN)


    //Call the touch-handling function
   	handleTouchPad();

    //Update the game and redraw the blocks
}
