//////////////////////////////////////////////////////////////////////////
//
// pgAdmin III - PostgreSQL Tools
// Copyright (C) 2002, The pgAdmin Development Team
// This software is released under the pgAdmin Public Licence
//
// frmSplash.cpp - Splash Screen
//
//////////////////////////////////////////////////////////////////////////

// wxWindows headers
#include <wx/wx.h>
#include <wx/image.h>

// App headers
#include "pgAdmin3.h"
#include "frmSplash.h"

// Icons
#include "images/pgAdmin3.xpm"

// Splash
#include "images/splash.xpm"

BEGIN_EVENT_TABLE(frmSplash, wxFrame)
EVT_PAINT(frmSplash::OnPaint)
END_EVENT_TABLE()

frmSplash::frmSplash(wxFrame *parent)
: wxFrame(parent, -1, "", wxDefaultPosition, wxDefaultSize, wxFRAME_TOOL_WINDOW)
{
    
    wxLogInfo(wxT("Creating a splash screen"));

    // Icon
    SetIcon(wxIcon(pgAdmin3_xpm));

    // Image
    imgSplash = wxBitmap(splash_xpm);
    
    SetClientSize(imgSplash.GetWidth(), imgSplash.GetHeight());
    wxString szVersion = wxT("Version: ");
    szVersion.Append(VERSION);
	(void)new wxPanel(this, -1, wxPoint(10,155), wxSize(0,0));
	(void)new wxStaticText(this, -1,szVersion, wxPoint(10,155));
    this->Center();
}

frmSplash::~frmSplash()
{
    wxLogInfo(wxT("Destroying a splash screen"));
}

void frmSplash::OnPaint(wxPaintEvent& WXUNUSED(event))
{
    wxPaintDC dc(this);
    dc.DrawBitmap(imgSplash, 0, 0);
}
