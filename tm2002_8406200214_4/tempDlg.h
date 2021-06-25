// tempDlg.h : header file
//

#if !defined(AFX_TEMPDLG_H__BA9F7023_754E_431B_976B_06EAE1E9DA23__INCLUDED_)
#define AFX_TEMPDLG_H__BA9F7023_754E_431B_976B_06EAE1E9DA23__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTempDlg dialog

class CTempDlg : public CDialog
{
// Construction
public:
	CTempDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTempDlg)
	enum { IDD = IDD_TEMP_DIALOG };
	BOOL	m_k1;
	BOOL	m_k2;
	CString	m_e1;
	CString	m_e2;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTempDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTempDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnCheck1();
	afx_msg void OnCheck2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEMPDLG_H__BA9F7023_754E_431B_976B_06EAE1E9DA23__INCLUDED_)
