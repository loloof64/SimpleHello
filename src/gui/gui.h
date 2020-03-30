#pragma once

#include "wxform_generated.h"

class MainFrame : public MainFrameBase
{
	public:
		MainFrame( wxWindow* parent ): MainFrameBase(parent){ Center(); };
	protected:
		virtual void greetUser( wxCommandEvent& event );
};

class HelloDialog: public HelloDialogBase
{
	public:
		HelloDialog( wxWindow* parent ): HelloDialogBase(parent){};
		void setMessage( const wxString& message );
};