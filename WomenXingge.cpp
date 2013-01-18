// WomenXingge.cpp: implementation of the WomenXingge class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "xingge.h"
#include "WomenXingge.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

WomenXingge::WomenXingge(const CString desp,const CString detail,const CString zhonggao)
{
	m_desp = desp;
	m_detail = detail;
	m_zhonggao = zhonggao;
}

WomenXingge::~WomenXingge()
{
	
}
CString WomenXingge::getZhonggao()
{
	return m_zhonggao;
}

CString WomenXingge::getDesp()
{
	return m_desp;
}

CString WomenXingge::getDetail()
{
	return m_detail;
}

WomenXingge::WomenXingge()
{
	m_desp = "";
	m_detail = "";
	m_zhonggao = "";	
}
