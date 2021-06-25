// temp.h : main header file for the TEMP application
//

#if !defined(AFX_TEMP_H__DFCD0666_4F51_491D_B019_A1D28EA9B7FC__INCLUDED_)
#define AFX_TEMP_H__DFCD0666_4F51_491D_B019_A1D28EA9B7FC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTempApp:
// See temp.cpp for the implementation of this class
//

class CTempApp : public CWinApp
{
public:
	CTempApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTempApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTempApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEMP_H__DFCD0666_4F51_491D_B019_A1D28EA9B7FC__INCLUDED_)
