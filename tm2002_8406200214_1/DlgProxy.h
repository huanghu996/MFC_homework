// DlgProxy.h : header file
//

#if !defined(AFX_DLGPROXY_H__764228E0_EFF3_4EE0_878F_B175B3875283__INCLUDED_)
#define AFX_DLGPROXY_H__764228E0_EFF3_4EE0_878F_B175B3875283__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMFCHomeworkDlg;

/////////////////////////////////////////////////////////////////////////////
// CMFCHomeworkDlgAutoProxy command target

class CMFCHomeworkDlgAutoProxy : public CCmdTarget
{
	DECLARE_DYNCREATE(CMFCHomeworkDlgAutoProxy)

	CMFCHomeworkDlgAutoProxy();           // protected constructor used by dynamic creation

// Attributes
public:
	CMFCHomeworkDlg* m_pDialog;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCHomeworkDlgAutoProxy)
	public:
	virtual void OnFinalRelease();
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CMFCHomeworkDlgAutoProxy();

	// Generated message map functions
	//{{AFX_MSG(CMFCHomeworkDlgAutoProxy)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
	DECLARE_OLECREATE(CMFCHomeworkDlgAutoProxy)

	// Generated OLE dispatch map functions
	//{{AFX_DISPATCH(CMFCHomeworkDlgAutoProxy)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGPROXY_H__764228E0_EFF3_4EE0_878F_B175B3875283__INCLUDED_)
