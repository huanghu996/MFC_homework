// DlgProxy.cpp : implementation file
//

#include "stdafx.h"
#include "MFC Homework.h"
#include "DlgProxy.h"
#include "MFC HomeworkDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCHomeworkDlgAutoProxy

IMPLEMENT_DYNCREATE(CMFCHomeworkDlgAutoProxy, CCmdTarget)

CMFCHomeworkDlgAutoProxy::CMFCHomeworkDlgAutoProxy()
{
	EnableAutomation();
	
	// To keep the application running as long as an automation 
	//	object is active, the constructor calls AfxOleLockApp.
	AfxOleLockApp();

	// Get access to the dialog through the application's
	//  main window pointer.  Set the proxy's internal pointer
	//  to point to the dialog, and set the dialog's back pointer to
	//  this proxy.
	ASSERT (AfxGetApp()->m_pMainWnd != NULL);
	ASSERT_VALID (AfxGetApp()->m_pMainWnd);
	ASSERT_KINDOF(CMFCHomeworkDlg, AfxGetApp()->m_pMainWnd);
	m_pDialog = (CMFCHomeworkDlg*) AfxGetApp()->m_pMainWnd;
	m_pDialog->m_pAutoProxy = this;
}

CMFCHomeworkDlgAutoProxy::~CMFCHomeworkDlgAutoProxy()
{
	// To terminate the application when all objects created with
	// 	with automation, the destructor calls AfxOleUnlockApp.
	//  Among other things, this will destroy the main dialog
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void CMFCHomeworkDlgAutoProxy::OnFinalRelease()
{
	// When the last reference for an automation object is released
	// OnFinalRelease is called.  The base class will automatically
	// deletes the object.  Add additional cleanup required for your
	// object before calling the base class.

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CMFCHomeworkDlgAutoProxy, CCmdTarget)
	//{{AFX_MSG_MAP(CMFCHomeworkDlgAutoProxy)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CMFCHomeworkDlgAutoProxy, CCmdTarget)
	//{{AFX_DISPATCH_MAP(CMFCHomeworkDlgAutoProxy)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_DISPATCH_MAP
END_DISPATCH_MAP()

// Note: we add support for IID_IMFCHomework to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .ODL file.

// {6670114C-86C2-44D3-A956-85861C4E53E7}
static const IID IID_IMFCHomework =
{ 0x6670114c, 0x86c2, 0x44d3, { 0xa9, 0x56, 0x85, 0x86, 0x1c, 0x4e, 0x53, 0xe7 } };

BEGIN_INTERFACE_MAP(CMFCHomeworkDlgAutoProxy, CCmdTarget)
	INTERFACE_PART(CMFCHomeworkDlgAutoProxy, IID_IMFCHomework, Dispatch)
END_INTERFACE_MAP()

// The IMPLEMENT_OLECREATE2 macro is defined in StdAfx.h of this project
// {A928A279-9DCB-4EB6-B936-0B96A18B26E4}
IMPLEMENT_OLECREATE2(CMFCHomeworkDlgAutoProxy, "MFCHomework.Application", 0xa928a279, 0x9dcb, 0x4eb6, 0xb9, 0x36, 0xb, 0x96, 0xa1, 0x8b, 0x26, 0xe4)

/////////////////////////////////////////////////////////////////////////////
// CMFCHomeworkDlgAutoProxy message handlers
