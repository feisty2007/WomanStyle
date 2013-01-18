// WomenXingge.h: interface for the WomenXingge class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WOMENXINGGE_H__C1C95026_0148_4F09_8DC5_402F66A894F3__INCLUDED_)
#define AFX_WOMENXINGGE_H__C1C95026_0148_4F09_8DC5_402F66A894F3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class WomenXingge  
{
public:
	WomenXingge();
	CString getZhonggao();
	CString getDetail();
	CString getDesp();
	WomenXingge(const CString desp,const CString detail,const CString zhongao);
	virtual ~WomenXingge();
	
private:
	CString m_desp;
	CString m_detail;
	CString m_zhonggao;
};

#endif // !defined(AFX_WOMENXINGGE_H__C1C95026_0148_4F09_8DC5_402F66A894F3__INCLUDED_)
