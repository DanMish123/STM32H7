#include <gui/main_screen/MainView.hpp>

uint8_t state = 0;

MainView::MainView()
{
}

void MainView::setupScreen()
{
}

void MainView::tearDownScreen()
{
}

void MainView::updatePoolLight()
{
    //report change to presenter
    presenter->setPoolLight(onOffButton.getState());

    state = onOffButton.getState();
}

void MainView::setPoolLight(bool state)
{
    onOffButton.forceState(state);
    bulbYellow.setVisible(state);

    onOffButton.invalidate();
    bulbYellow.invalidate();
}
