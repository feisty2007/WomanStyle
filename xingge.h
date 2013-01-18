// xingge.h : main header file for the XINGGE application
//

#if !defined(AFX_XINGGE_H__B005CF91_0A00_40D5_93B1_5E396D2E6F79__INCLUDED_)
#define AFX_XINGGE_H__B005CF91_0A00_40D5_93B1_5E396D2E6F79__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CXinggeApp:
// See xingge.cpp for the implementation of this class
//

class CXinggeApp : public CWinApp
{
public:
	CXinggeApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXinggeApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CXinggeApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XINGGE_H__B005CF91_0A00_40D5_93B1_5E396D2E6F79__INCLUDED_)
