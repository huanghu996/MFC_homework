// tempDlg.cpp : implementation file
//

#include "stdafx.h"
#include "temp.h"
#include "tempDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTempDlg dialog

CTempDlg::CTempDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTempDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CTempDlg)
	m_e1 = _T("");
	m_conb = _T("");
	m_c1 = FALSE;
	m_c2 = FALSE;
	m_c3 = FALSE;
	m_e2 = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTempDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CTempDlg)
	DDX_Control(pDX, IDC_LIST1, m_l);
	DDX_Control(pDX, IDC_SCROLLBAR1, m_sc);
	DDX_Text(pDX, IDC_EDIT1, m_e1);
	DDX_CBString(pDX, IDC_COMBO1, m_conb);
	DDX_Check(pDX, IDC_CHECK1, m_c1);
	DDX_Check(pDX, IDC_CHECK2, m_c2);
	DDX_Check(pDX, IDC_CHECK3, m_c3);
	DDX_Text(pDX, IDC_EDIT2, m_e2);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CTempDlg, CDialog)
	//{{AFX_MSG_MAP(CTempDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_WM_HSCROLL()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTempDlg message handlers

BOOL CTempDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
CheckRadioButton(IDC_RADIO1, IDC_RADIO2, IDC_RADIO1); 
m_sc.SetScrollRange(0,30); 
m_sc.SetScrollPos(10); 
m_e2=10; 
UpdateData(FALSE);

	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CTempDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTempDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CTempDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CTempDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
UpdateData(TRUE); // 用各控件中的值更新对应的连接变量 
m_l.ResetContent(); // 删除列表框中所有的内容 
m_l.AddString(m_e1); 
if(IsDlgButtonChecked(IDC_RADIO1)) 
m_l.AddString(" 男 "); 
else 
m_l.AddString(" 女 "); 
if (m_c1) m_l.AddString(" 旅游 "); 
if (m_c2) m_l.AddString(" 运动 "); 
if (m_c3) m_l.AddString(" 音乐 "); 
CString s; 
s.Format("%d",m_e2); // m_e2 是 int 类型，将它转换成字符串 
m_l.AddString(s); 
m_l.AddString(m_conb); 

}

void CTempDlg::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar) 
{
	// TODO: Add your message handler code here and/or call default
	if (pScrollBar==&m_sc) 
	{ int iNowPos; 
      switch(nSBCode) 
	  { case SB_THUMBTRACK: // 拖动滚动滑块时 
             m_sc.SetScrollPos(nPos); 
             m_e2=nPos; 
              break; 
	   case SB_LINELEFT : // 单击滚动条向左的箭头 
		    iNowPos=m_sc.GetScrollPos(); // 获取滑块当前位置所代表的值 
		    iNowPos=iNowPos-2; 
		    if(iNowPos<0) 
			   iNowPos=0; 
			m_sc.SetScrollPos(iNowPos); 
			m_e2=iNowPos; 
			break; 
		case SB_LINERIGHT : // 单击滚动条向右的箭头 
			iNowPos=m_sc.GetScrollPos(); // 获取滑块当前位置所代表的值 
			iNowPos=iNowPos+2; 
			if(iNowPos>100) 
				iNowPos=100; 
			m_sc.SetScrollPos(iNowPos); 
			m_e2=iNowPos; 
			break; 
		case SB_PAGELEFT : // 单击滚动条左边的箭头与滑块之间的区域 
			iNowPos=m_sc.GetScrollPos(); // 获取滑块当前位置所代表的值 
			iNowPos=iNowPos-10; 
			if(iNowPos<0) 
				iNowPos=0;
			m_sc.SetScrollPos(iNowPos); 
			m_e2=iNowPos; 
			break; 
case SB_PAGERIGHT : // 单击滚动条右边的箭头与滑块之间的区域 
			iNowPos=m_sc.GetScrollPos(); // 获取滑块当前位置所代表的值 
			iNowPos=iNowPos+10; 
			if(iNowPos>100) 
				iNowPos=100; 
			m_sc.SetScrollPos(iNowPos); 
			m_e2=iNowPos; 
			break; 
		 } 
	}
	UpdateData(FALSE); 

	CDialog::OnHScroll(nSBCode, nPos, pScrollBar);

}
