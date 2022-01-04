#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>


Screen1Presenter::Screen1Presenter(Screen1View& v)
    : view(v)
{

}

void Screen1Presenter::activate()
{

}

void Screen1Presenter::deactivate()
{

}

void Screen1Presenter::SwB_LED_blue(){
	model->HW_LED_blue();
}

void Screen1Presenter::userButton(int var1){
	view.ColorBack(var1);
}
