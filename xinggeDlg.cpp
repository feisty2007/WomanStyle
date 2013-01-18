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

	m_xingges[0] = WomenXingge("芒果型女人",
		"芒果的样子实在可爱，但吃到最后发现实在是肉少核大。芒果女人要么本身就强．，要么自己要强，独立意识浓厚甚至有些刚愎自用。她们雷厉风行，是事业的宠儿，敢与男人在商场上拼杀，无论在工作、生活上都要争取第一最好。是主动买单的女人，恋爱过程中她们会不吝于倒贴，适合姐弟恋。容易发怒。不屑的眼神和那张喜欢挖苦别人的嘴，常使得周遭的人被那如机关枪般发射出来的言词打得稀里哗啦。芒果女人是凯迪拉克轿车，没有一定信心、耐心和实力的男人甭想踏上她的客船。她在建构自己的婚姻生活时，常按照自己的理想来选择结婚对象。婚姻生活中充满了冷静和原则。",
		"切记：减少情绪风暴发生的次数，你的人生更美好。");
	m_xingges[1]=WomenXingge("苹果型女人",
		"白皙红润的肌肤是迷人的地方，就是胖胖的也很可爱，不是吗?情感深厚且温和，让周遭的人备感温馨。喜欢小孩，又会做家事，有可能成为十足的好妈妈。由于性格比较保守，因此衣着打扮倾向成熟的职业装，比较易得到年纪比自己小的男子的信赖。善于理财，精打细算的头脑，像是装了电子计算机。做事认真且专注，是个受到称赞拼命实干的职员。不背叛另一半，对感情诚恳忠实，持中庸之道，享受平稳的人生。苹果女人一般女友较多，外遇少。就像电车，绝对很少出轨。她们很少有石破天惊的爱情，平淡的生活也许让她感觉婚姻像是闷罐车，所以夫妻会在争吵中稳固关系",
		"切记：偶尔跨出保守，尝试良性的冒险。");
	m_xingges[2] = WomenXingge("荔枝型女人",
		"是最懂得享受的女人。富有艺术家气质并天生就懂得如何把自己的独特气质散发出来的荔枝女人，是红色的法拉利，最好看了，实用吗?不知道。荔枝女人一生难逃曲高和寡的人生际遇。她出众但很少从众，无论在服饰打扮还是思想意识上都是如此。善于整理事物，是个要求严苛的人，有相当严重的洁癖，是免洗马桶坐垫的忠实使用者。讨厌不爱干净的男人。因此．有许多是单身贵族。在交友和爱情上，坚守宁缺毋滥的原则。终于等到了属于自己的那杯爱尔兰咖啡，她会一直品下去。",
		"切记：聪明反被聪明误。");
	m_xingges[3] = WomenXingge("水蜜桃型女人",
		"水蜜桃女人是发嗲和撒娇的高手。如果她想买件貂皮大衣，男人不答应，她就来个软硬兼施，不达目的绝不罢休f当软的失效，硬的上场，外加点儿咬一咬、打一打、拧一拧的动作，直到男人乖乖地点头为止。水蜜桃女人是最有心机、心计的女人，她们像诡计多端的蜘蛛，精心地编织女性温柔的陷阱，捕获的猎物锁定那些能给她们生活品质升级的男人。她像出租车，到处乱停，搭乘她的车记得买单就可以了。而脚踩多条船是水蜜桃女人的特长，能够把感情同时分给好几个人，真是小花心一个。所以经常上演没有结果的爱情短篇!看似浮萍的水蜜桃女人，绝对不会因对方的猛烈求婚而贸然答应婚事。在选择结婚对象时，会倾向挑有经济基础的，渴望结婚后过上衣食无忧的全职太太生活。",
		"切记：可以孤独，但勿封闭");
	m_xingges[4] = WomenXingge("橘子型女人",
		"个性明朗、开放的橘子女人，脸上总是浮现出阳光般的笑容，120的开朗度和自信度让她不管走到哪里，都能成为最受瞩目的焦点，结交一堆的朋友。她是观光车，和她在一起有时像度假般轻松，有时又像坐疯狂过山车一般刺激。便服也好、盛装也罢，随意打扮都能出彩儿。她不是时尚先锋，但却始终懂得在自己身上点缀一两点流行元素，不要那么多，只要一点点酸酸甜甜的橘子女人是最具野蛮女友(太太)潜质的女人。因为可爱，所以野蛮，让男人欲罢不能。聚会中常会有恋情发生。忽冷忽热没定性的心，只有三分钟热度的嗜好一大堆。",
		"切记：爱慕虚荣，喜欢被人宠着，若不收敛些，有可能失去朋友或者成为同事妒忌的对象.");
	m_xingges[5] = WomenXingge("葡萄型女人",
		"柔和的葡萄紫色，代表着关心，给人安全感；而葡萄的一粒一粒代表着一点一滴、无微不至，虽不起眼，却叫人回味深长。是随着年龄的增长越来越丰富的女人，天生的乐天派，认为明天永远比今天好。青春对于她是酸涩的，自信和快乐是随着岁月的增长而弥增的。她知道在自己最好的时候选择一份成熟的爱情，然后坚定地将爱情进行到底。她们一般都晚婚，即使结婚也像在谈恋爱。葡萄女人是公共汽车，按时发车、到站停车。聪明敏锐，充满求知欲。即使结婚生子，同样对自己的事业和爱好保持一份好奇与恒心。表面上看她圆润、水灵，其实有自己的内涵，郡就是一份游刃有余的事业。一个爱她的丈夫，一个可爱的孩子，一份游刃有余的工作构成她三足鼎立的完满人生。",
		"切记：自满");
	m_xingges[6] = WomenXingge("香蕉型女人",
		"香蕉黏糊，保鲜期短，容易腐烂。香蕉女人依赖性强，独立性差。她是自行车，你不踩，她准停下来。凡事总爱依赖别人，不自己决定，有时会成为别人的大包袱。她们一般从父母手里挣脱后就来到了丈夫手里，一生跨不出3门——父母家门、夫家门、墓地门。她们通常胆小怕事。婚姻是她生活的支点，那个男人是杠杆。命运好的话，找到一棵大树一样的男人安度一生；际遇不好的话，丈夫中途另有新欢让她下车，她不是寻死觅活就是沦为新怨妇。香蕉女人青春期短，更年期长。一生缺乏安全感",
		"切记：独立自主，自力更生。");
	m_xingges[7] = WomenXingge("草莓型女人",
		"草莓女人有自信，具魅力，爱做梦，是圣诞老人的马车。打从心底里相信并追求完美的爱情。感受性很丰富而且善于编织美梦，所以容易让自己沉浸于象牙塔中。",
		"切记：你的缺点是没有耐性，因为一直支持着你的是抽象的自信心，所以一旦事情的发展无法如预期般进展时，就会突然中断放弃。");
	m_xingges[8] = WomenXingge("菠萝型女人",
		"菠萝女人体态丰腴，令人不知不觉地想忆过去。黄色的菠萝加上绿色的叶子，大概没有人会说不好看，但是菠萝周身都带刺，要叫人小心翼翼。远观无害，近有伤。菠萝女人是碰碰车，为人处世十分讲究原则和分寸。菠萝女人的婚姻观是追求自由，相互尊重，多给对方一些空间。对菠萝女人来说，婚姻是一种甜蜜的负荷。因此菠萝女人痛恨那种处处注重长幼有序的关系，骨子里有一种颠覆传统的叛逆气息。",
		"切记：过度的自我保护可能错失爱的机缘。");
	m_xingges[9] = WomenXingge("猕猴桃型女人",
		"：猕猴桃英文是kiwifruit，用粤语翻译过来是“奇异果”的意思。她们通常外柔内刚，平凡的仪表下掩藏着一颗不平凡的心。如果不是主动出击，她们很少能得到理想的爱情。他娶她的时候有些不那么情愿，但婚后才发现是“手里的宝”。猕猴桃女人旺夫，她一边操持家务，一边为丈夫出谋划策，让丈夫的事业在她的协助下螺旋上升、蒸蒸日上。这个相貌普通，不化妆、不美容也不减肥的女人可以把一个工薪阶层的家过得有声有色。猕猴桃女人是人力车，实惠踏实。",
		"切记：自卑是你一生的敌人");

	
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
		MessageBox("请输入名字的汉语拼音","提醒");
		return;
	}

	int i;

	TCHAR cChar;
	for(i=0;i<iLen;i++)
	{
		cChar = m_inputString.GetAt(i);
		if(cChar < 'a' || cChar > 'z' )
		{
			MessageBox("请有效小写拼音字母a-z","提醒");
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
