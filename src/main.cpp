#include "gui/gui.h"
#include <wx/app.h>

class App: public wxApp {
public:
    App() : wxApp() {};
    ~App();
    virtual bool OnInit();
private:
    MainFrame *mainFrame;
};

IMPLEMENT_APP(App);

bool App::OnInit()
{
    mainFrame = new MainFrame{nullptr};
    mainFrame->Show(true);

    return true;
}

App::~App()
{
    delete mainFrame;
}