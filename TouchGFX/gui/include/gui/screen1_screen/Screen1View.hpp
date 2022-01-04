#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void LEDScreen();
    virtual void ColorBack(int var1);
    virtual void BoxCollor()
    {
        box1.setColor(box1.getColor() + 1234); //pega a cor e modifica somando o 1234
        box1.invalidate(); //usar o invalidate pra for�ar a mudan�a na tela
    }


protected:

private:
    uint8_t counterB = 0;
    uint8_t counterR = 0;

};

#endif // SCREEN1VIEW_HPP
