//////////////////////////////////////////////////////////////////////////
//
// pgAdmin III - PostgreSQL Tools
// RCS-ID:      $Id$
// Copyright (C) 2002 - 2009, The pgAdmin Development Team
// This software is released under the BSD Licence
//
// xh_timespin.h - wxTimeSpinCtrl handler
//
//////////////////////////////////////////////////////////////////////////


#ifndef _WX_XH_TIMESPIN_H_
#define _WX_XH_TIMESPIN_H_


#include "wx/xrc/xmlres.h"

//class WXDLLIMPEXP_XRC 
class wxTimeSpinXmlHandler : public wxXmlResourceHandler
{
DECLARE_DYNAMIC_CLASS(wxTimeSpinXmlHandler)
public:
    wxTimeSpinXmlHandler();
    virtual wxObject *DoCreateResource();
    virtual bool CanHandle(wxXmlNode *node);
};


#endif // _WX_XH_TIMESPIN_H_
