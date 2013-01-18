// xinggeDlg.h : header file
//

#if !defined(AFX_XINGGEDLG_H__5DF21DBA_FB52_4316_9CF2_4AAF445E8424__INCLUDED_)
#define AFX_XINGGEDLG_H__5DF21DBA_FB52_4316_9CF2_4AAF445E8424__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CXinggeDlg dialog
#include "WomenXingge.h"


class CXinggeDlg : public CDialog
{
// Construction
public:
	void SetTestResult(int i);
	CXinggeDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CXinggeDlg)
	enum { IDD = IDD_XINGGE_DIALOG };
	CEdit	m_edtPingyin;
	CStatic	m_leixing;
	CStatic	m_Zhonggao;
	CEdit	m_Tezheng;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXinggeDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	
	WomenXingge m_xingges[10];
	int m_biaoge[26];
	// Generated message map functions
	//{{AFX_MSG(CXinggeDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonTest();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XINGGEDLG_H__5DF21DBA_FB52_4316_9CF2_4AAF445E8424__INCLUDED_)
