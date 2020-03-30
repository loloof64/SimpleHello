#include "gui/gui.h"
#include <wx/app.h>

class App: public wxApp {
public:
    virtual bool OnInit();
};

IMPLEMENT_APP(App);

bool App::OnInit()
{
    MainFrame *mainFrame = new MainFrame(nullptr);
    mainFrame->Show(true);

    return true;
}