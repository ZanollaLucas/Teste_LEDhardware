#include <gui/screen1_screen/Screen1View.hpp>
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

constexpr uint8_t UPPER_LIMIT = 99;



Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::LEDScreen()
{
    presenter -> SwB_LED_blue();
    counterB ++;
    Unicode::snprintf(countBBuffer, 3, "%d", counterB);
    countB.invalidate();

}

void Screen1View::ColorBack(int var1)
{
   	box1.setColor(box1.getColor() + 1234); //pega a cor e modifica diminuindo o 1234
    //counterR ++; // pode ser feita a contagem aqui, mas para testar a transmição de variável, a contagem foi feita no main.c e transmitida como var1 até aqui
   	counterR = var1;
   	Unicode::snprintf(countRBuffer, 3, "%d", counterR);
    countR.invalidate();
    box1.invalidate(); //usar o invalidate pra forçar a mudança na tela

}
