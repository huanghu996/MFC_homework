// MFC HomeworkDlg.h : header file
//

#if !defined(AFX_MFCHOMEWORKDLG_H__802ACA75_D435_4B2A_AB1B_726BA95E3D0D__INCLUDED_)
#define AFX_MFCHOMEWORKDLG_H__802ACA75_D435_4B2A_AB1B_726BA95E3D0D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMFCHomeworkDlgAutoProxy;

/////////////////////////////////////////////////////////////////////////////
// CMFCHomeworkDlg dialog

class CMFCHomeworkDlg : public CDialog
{
	DECLARE_DYNAMIC(CMFCHomeworkDlg);
	friend class CMFCHomeworkDlgAutoProxy;

// Construction
public:
	CMFCHomeworkDlg(CWnd* pParent = NULL);	// standard constructor
	virtual ~CMFCHomeworkDlg();

// Dialog Data
	//{{AFX_DATA(CMFCHomeworkDlg)
	enum { IDD = IDD_MFCHOMEWORK_DIALOG };
	CEdit	m_e2;
	CEdit	m_e1;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCHomeworkDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	CMFCHomeworkDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// Generated message map functions
	//{{AFX_MSG(CMFCHomeworkDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCHOMEWORKDLG_H__802ACA75_D435_4B2A_AB1B_726BA95E3D0D__INCLUDED_)
