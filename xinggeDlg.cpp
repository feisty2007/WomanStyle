// xinggeDlg.cpp : implementation file
//

#include "stdafx.h"
#include "xingge.h"
#include "xinggeDlg.h"

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
// CXinggeDlg dialog

CXinggeDlg::CXinggeDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CXinggeDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CXinggeDlg)
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CXinggeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CXinggeDlg)
	DDX_Control(pDX, IDC_EDIT_PINYIN, m_edtPingyin);
	DDX_Control(pDX, IDC_STATIC_LEIXING, m_leixing);
	DDX_Control(pDX, IDC_STATIC_ZHONGGAO, m_Zhonggao);
	DDX_Control(pDX, IDC_EDIT_TEZHENG, m_Tezheng);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CXinggeDlg, CDialog)
	//{{AFX_MSG_MAP(CXinggeDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_TEST, OnButtonTest)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CXinggeDlg message handlers

BOOL CXinggeDlg::OnInitDialog()
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
	m_biaoge[0] = 1;
	m_biaoge[1] = 2;
	m_biaoge[2] = 2;
	m_biaoge[3] = 2;
	m_biaoge[4] = 2;
	m_biaoge[5] = 3;
	m_biaoge[6] = 1;
	m_biaoge[7] = 2;
	m_biaoge[8] = 2;
	m_biaoge[9] = 2;
	m_biaoge[10] = 2;
	m_biaoge[11] = 1;
	m_biaoge[12] = 2;
	m_biaoge[13] = 3;
	m_biaoge[14] = 3;
	m_biaoge[15] = 3;
	m_biaoge[16] = 3;
	m_biaoge[17] = 3;
	m_biaoge[18] = 2;
	m_biaoge[19] = 2;
	m_biaoge[20] = 2;
	m_biaoge[21] = 2;
	m_biaoge[22] = 1;
	m_biaoge[23] = 3;
	m_biaoge[24] = 1;
	m_biaoge[25] = 2;

	m_xingges[0] = WomenXingge("â����Ů��",
		"â��������ʵ�ڿɰ������Ե������ʵ�������ٺ˴�â��Ů��Ҫô�����ǿ����Ҫô�Լ�Ҫǿ��������ʶŨ��������Щ������á������������У�����ҵ�ĳ���������������̳���ƴɱ�������ڹ����������϶�Ҫ��ȡ��һ��á��������򵥵�Ů�ˣ��������������ǻ᲻���ڵ������ʺϽ���������׷�ŭ����м�����������ϲ���ڿ���˵��죬��ʹ��������˱��������ǹ�㷢��������Դʴ��ϡ�ﻩ����â��Ů���ǿ������˽γ���û��һ�����ġ����ĺ�ʵ�������˱���̤�����Ŀʹ������ڽ����Լ��Ļ�������ʱ���������Լ���������ѡ������󡣻��������г������侲��ԭ��",
		"�мǣ����������籩�����Ĵ�����������������á�");
	m_xingges[1]=WomenXingge("ƻ����Ů��",
		"������ļ��������˵ĵط����������ֵ�Ҳ�ܿɰ���������?���������ºͣ���������˱�����ܰ��ϲ��С�����ֻ������£��п��ܳ�Ϊʮ��ĺ����衣�����Ը�Ƚϱ��أ�������Ŵ����������ְҵװ���Ƚ��׵õ���ͱ��Լ�С�����ӵ�������������ƣ�����ϸ���ͷ�ԣ�����װ�˵��Ӽ����������������רע���Ǹ��ܵ�����ƴ��ʵ�ɵ�ְԱ����������һ�룬�Ը���Ͽ���ʵ������ӹ֮��������ƽ�ȵ�������ƻ��Ů��һ��Ů�ѽ϶࣬�����١�����糵�����Ժ��ٳ��졣���Ǻ�����ʯ���쾪�İ��飬ƽ��������Ҳ�������о����������ƹ޳������Է��޻����������ȹ̹�ϵ",
		"�мǣ�ż��������أ��������Ե�ð�ա�");
	m_xingges[2] = WomenXingge("��֦��Ů��",
		"��������ܵ�Ů�ˡ��������������ʲ������Ͷ�����ΰ��Լ��Ķ�������ɢ����������֦Ů�ˣ��Ǻ�ɫ�ķ���������ÿ��ˣ�ʵ����?��֪������֦Ů��һ���������ߺ͹ѵ����������������ڵ����ٴ��ڣ������ڷ��δ�绹��˼����ʶ�϶�����ˡ�������������Ǹ�Ҫ���Ͽ����ˣ����൱���صĽ�񱣬����ϴ��Ͱ�������ʵʹ���ߡ����᲻���ɾ������ˡ���ˣ�������ǵ�����塣�ڽ��ѺͰ����ϣ�������ȱ���ĵ�ԭ�����ڵȵ��������Լ����Ǳ����������ȣ�����һֱƷ��ȥ��",
		"�мǣ���������������");
	m_xingges[3] = WomenXingge("ˮ������Ů��",
		"ˮ����Ů���Ƿ��Ǻ������ĸ��֡�������������Ƥ���£����˲���Ӧ������������Ӳ��ʩ������Ŀ�ľ�������f�����ʧЧ��Ӳ���ϳ�����ӵ��ҧһҧ����һ��šһš�Ķ�����ֱ�����˹ԹԵص�ͷΪֹ��ˮ����Ů���������Ļ����ļƵ�Ů�ˣ��������ƶ�˵�֩�룬���ĵر�֯Ů����������壬���������������Щ�ܸ���������Ʒ�����������ˡ�������⳵��������ͣ��������ĳ��ǵ��򵥾Ϳ����ˡ����Ųȶ�������ˮ����Ů�˵��س����ܹ��Ѹ���ͬʱ�ָ��ü����ˣ�����С����һ�������Ծ�������û�н���İ����ƪ!���Ƹ�Ƽ��ˮ����Ů�ˣ����Բ�����Է�����������óȻ��Ӧ���¡���ѡ�������ʱ�����������о��û����ģ��������������ʳ���ǵ�ȫְ̫̫���",
		"�мǣ����Թ¶���������");
	m_xingges[4] = WomenXingge("������Ů��",
		"�������ʡ����ŵ�����Ů�ˣ��������Ǹ��ֳ�������Ц�ݣ�120�Ŀ��ʶȺ����Ŷ����������ߵ�������ܳ�Ϊ������Ŀ�Ľ��㣬�ύһ�ѵ����ѡ����ǹ۹⳵��������һ����ʱ��ȼٰ����ɣ���ʱ����������ɽ��һ��̼������Ҳ�á�ʢװҲ�գ������綼�ܳ��ʶ���������ʱ���ȷ棬��ȴʼ�ն������Լ����ϵ�׺һ��������Ԫ�أ���Ҫ��ô�ֻ࣬Ҫһ����������������Ů�������Ұ��Ů��(̫̫)Ǳ�ʵ�Ů�ˡ���Ϊ�ɰ�������Ұ�������������ղ��ܡ��ۻ��г��������鷢�����������û���Ե��ģ�ֻ���������ȶȵ��Ⱥ�һ��ѡ�",
		"�мǣ���Ľ���٣�ϲ�����˳��ţ���������Щ���п���ʧȥ���ѻ��߳�Ϊͬ�¶ʼɵĶ���.");
	m_xingges[5] = WomenXingge("������Ů��",
		"��͵�������ɫ�������Ź��ģ����˰�ȫ�У������ѵ�һ��һ��������һ��һ�Ρ���΢�������䲻���ۣ�ȴ���˻�ζ������������������Խ��Խ�ḻ��Ů�ˣ������������ɣ���Ϊ������Զ�Ƚ���á��ഺ����������ɬ�ģ����źͿ������������µ������������ġ���֪�����Լ���õ�ʱ��ѡ��һ�ݳ���İ��飬Ȼ��ᶨ�ؽ�������е��ס�����һ�㶼��飬��ʹ���Ҳ����̸����������Ů���ǹ�����������ʱ��������վͣ�����������񣬳�����֪������ʹ������ӣ�ͬ�����Լ�����ҵ�Ͱ��ñ���һ�ݺ�������ġ������Ͽ���Բ��ˮ�飬��ʵ���Լ����ں���������һ�������������ҵ��һ���������ɷ�һ���ɰ��ĺ��ӣ�һ����������Ĺ������������㶦��������������",
		"�мǣ�����");
	m_xingges[6] = WomenXingge("�㽶��Ů��",
		"�㽶���������ڶ̣����׸��á��㽶Ů��������ǿ�������Բ�������г����㲻�ȣ���׼ͣ�����������ܰ��������ˣ����Լ���������ʱ���Ϊ���˵Ĵ����������һ��Ӹ�ĸ�������Ѻ���������ɷ����һ���粻��3�š�����ĸ���š�����š�Ĺ���š�����ͨ����С���¡��������������֧�㣬�Ǹ������Ǹܸˡ����˺õĻ����ҵ�һ�ô���һ�������˰���һ�����������õĻ����ɷ���;�����»������³���������Ѱ���ٻ������Ϊ��Թ�����㽶Ů���ഺ�ڶ̣������ڳ���һ��ȱ����ȫ��",
		"�мǣ���������������������");
	m_xingges[7] = WomenXingge("��ݮ��Ů��",
		"��ݮŮ�������ţ��������������Σ���ʥ�����˵���������ĵ������Ų�׷�������İ��顣�����Ժܷḻ�������ڱ�֯���Σ������������Լ��������������С�",
		"�мǣ����ȱ����û�����ԣ���Ϊһֱ֧��������ǳ���������ģ�����һ������ķ�չ�޷���Ԥ�ڰ��չʱ���ͻ�ͻȻ�жϷ�����");
	m_xingges[8] = WomenXingge("������Ů��",
		"����Ů����̬���飬���˲�֪�����������ȥ����ɫ�Ĳ��ܼ�����ɫ��Ҷ�ӣ����û���˻�˵���ÿ������ǲ����������̣�Ҫ����С������Զ���޺��������ˡ�����Ů������������Ϊ�˴���ʮ�ֽ���ԭ��ͷִ硣����Ů�˵Ļ�������׷�����ɣ��໥���أ�����Է�һЩ�ռ䡣�Բ���Ů����˵��������һ�����۵ĸ��ɡ���˲���Ů��ʹ�����ִ���ע�س�������Ĺ�ϵ����������һ�ֵ߸���ͳ��������Ϣ��",
		"�мǣ����ȵ����ұ������ܴ�ʧ���Ļ�Ե��");
	m_xingges[9] = WomenXingge("⨺�����Ů��",
		"��⨺���Ӣ����kiwifruit�������﷭������ǡ������������˼������ͨ�������ڸգ�ƽ�����Ǳ����ڲ���һ�Ų�ƽ�����ġ���������������������Ǻ����ܵõ�����İ��顣��Ȣ����ʱ����Щ����ô��Ը�������ŷ����ǡ�����ı�����⨺���Ů��������һ�߲ٳּ���һ��Ϊ�ɷ��ı���ߣ����ɷ����ҵ������Э���������������������ϡ������ò��ͨ������ױ��������Ҳ�����ʵ�Ů�˿��԰�һ����н�ײ�ļҹ���������ɫ��⨺���Ů������������ʵ��̤ʵ��",
		"�мǣ��Ա�����һ���ĵ���");

	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CXinggeDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CXinggeDlg::OnPaint() 
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
HCURSOR CXinggeDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CXinggeDlg::SetTestResult(int i)
{
  if(x<0 || x>9) return;
  
	WomenXingge wx = m_xingges[i];

	
	m_leixing.SetWindowText(wx.getDesp());
	m_Zhonggao.SetWindowText(wx.getZhonggao());
	m_Tezheng.SetWindowText(wx.getDetail());
}

void CXinggeDlg::OnButtonTest() 
{
	CString m_inputString;
	
	m_edtPingyin.GetWindowText(m_inputString);

	int iLen =m_inputString.GetLength(); 
	if( iLen == 0)
	{
		MessageBox("���������ֵĺ���ƴ��","����");
		return;
	}

	int i;

	TCHAR cChar;
	for(i=0;i<iLen;i++)
	{
		cChar = m_inputString.GetAt(i);
		if(cChar < 'a' || cChar > 'z' )
		{
			MessageBox("����ЧСдƴ����ĸa-z","����");
			return;
		}
	}

	int sum = 0;

	for(i=0;i<iLen;i++)
	{
		cChar = m_inputString.GetAt(i);
		sum += m_biaoge[(cChar - 97)];
	}
	
	//MessageBox(CString(sum));
	int iRet = sum % 10;

	SetTestResult(iRet);
}
