#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

extern "C" {
	extern int LED_TFT;
	extern int var1;
	extern void Toggle_LEDblue(void);
}


Model::Model() : modelListener(0)
{

}

void Model::tick()
{
#ifndef SIMULATOR
	if((LED_TFT)==1)
	{
		modelListener->userButton(var1);
		LED_TFT = 0;
	}
#endif
}

void Model::HW_LED_blue()
{
	Toggle_LEDblue();
}

