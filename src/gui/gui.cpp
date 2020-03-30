#include "gui.h"
#include <wx/string.h>

void MainFrame::greetUser( wxCommandEvent& event )
{
    HelloDialog dialog(this);
    wxString message;

    wxString userName = nameCtrl->GetLineText(0).Trim();

    message.Printf("Hello %s !", userName);
    dialog.setMessage(message);

    dialog.ShowModal();
}

void HelloDialog::setMessage( const wxString& message )
{
    helloLabel->SetLabel(message);
}