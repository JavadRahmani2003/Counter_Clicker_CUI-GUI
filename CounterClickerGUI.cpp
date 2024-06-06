#include <wx/wx.h>
#include <wx/string.h>

//MainVars
int a = 0;
wxString myint;
wxStaticText* mainText;
wxSizer* sizer;
wxPanel* mainpanel;
//MainVars

class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};

wxIMPLEMENT_APP(MyApp);

class MyFrame : public wxFrame
{
public:
    MyFrame();
    void OnAdd(wxCommandEvent& Event);
};

bool MyApp::OnInit()
{
    MyFrame* frame = new MyFrame();
    frame->Show(true);
    frame->wxWindow::Center();
    return true;
}

enum
{
    BTNid = 1,
    TextId = 2
};

MyFrame::MyFrame() : wxFrame(nullptr, wxID_ANY, "Counter Clicker", wxPoint(0,0), wxSize(450,220))
{
    mainpanel = new wxPanel(this);
    
    wxButton* myBtn = new wxButton(mainpanel,BTNid,"Click me to add",wxPoint(155,110));

    mainText = new wxStaticText(mainpanel, TextId, myint, wxPoint(195, 60));

    myBtn->Bind(wxEVT_COMMAND_BUTTON_CLICKED,&MyFrame::OnAdd,this);
}

void MyFrame::OnAdd(wxCommandEvent& Event)
{
    wxString* mynewstring = new wxString();
    a++;
    myint << a;
    
}
