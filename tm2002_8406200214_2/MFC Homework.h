// MFC Homework.h : main header file for the MFC HOMEWORK application
//

#if !defined(AFX_MFCHOMEWORK_H__4CA6AC54_5B99_41E8_981B_2DCD7A45E2DE__INCLUDED_)
#define AFX_MFCHOMEWORK_H__4CA6AC54_5B99_41E8_981B_2DCD7A45E2DE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCHomeworkApp:
// See MFC Homework.cpp for the implementation of this class
//

class CMFCHomeworkApp : public CWinApp
{
public:
	CMFCHomeworkApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCHomeworkApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMFCHomeworkApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCHOMEWORK_H__4CA6AC54_5B99_41E8_981B_2DCD7A45E2DE__INCLUDED_)
