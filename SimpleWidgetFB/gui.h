///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui__
#define __gui__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/statline.h>
#include <wx/sizer.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainDialogBase
///////////////////////////////////////////////////////////////////////////////
class MainDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textNama;
		wxButton* m_button1;
		
		wxStaticLine* m_staticLine;
		wxStdDialogButtonSizer* m_sdbSizer;
		wxButton* m_sdbSizerOK;
		wxButton* m_sdbSizerCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseDialog( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnBtnTampilClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCancelClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOKClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MainDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("wxMiniApp"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 400,300 ), long style = wxCLOSE_BOX|wxDEFAULT_DIALOG_STYLE );
		~MainDialogBase();
	
};

#endif //__gui__
