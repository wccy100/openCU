/////////////////////////////////////////////////////////////////////////////
// Name:        src/common/choiccmn.cpp
// Purpose:     common (to all ports) wxChoice functions
// Author:      Vadim Zeitlin
// Modified by:
// Created:     26.07.99
// RCS-ID:      $Id: choiccmn.cpp,v 1.1 2009/06/02 18:25:11 yakhmak Exp $
// Copyright:   (c) wxWidgets team
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

// ============================================================================
// declarations
// ============================================================================

// ----------------------------------------------------------------------------
// headers
// ----------------------------------------------------------------------------

// For compilers that support precompilation, includes "wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#if wxUSE_CHOICE

#include "wx/choice.h"

#ifndef WX_PRECOMP
#endif

const wxChar wxChoiceNameStr[] = wxT("choice");

// ============================================================================
// implementation
// ============================================================================

wxChoiceBase::~wxChoiceBase()
{
    // this destructor is required for Darwin
}

// ----------------------------------------------------------------------------
// misc
// ----------------------------------------------------------------------------

void wxChoiceBase::Command(wxCommandEvent& event)
{
    SetSelection(event.GetInt());
    (void)ProcessEvent(event);
}

#endif // wxUSE_CHOICE