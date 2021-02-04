/***************************************************************
 * Name:      TestApp.cpp
 * Purpose:   Code for Application Class
 * Author:    pradeep (sutharp777@gmail.com)
 * Created:   2021-02-04
 * Copyright: pradeep ()
 * License:
 **************************************************************/

#include "TestApp.h"
#include "TestMain.h"
#include <wx/image.h>

IMPLEMENT_APP(TestApp);

bool TestApp::OnInit()
{
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	TestFrame* Frame = new TestFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    return wxsOK;

}
