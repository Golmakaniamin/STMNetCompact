// Prn_BornaDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Prn_Borna.h"
#include "Prn_BornaDlg.h"
#include "PRN_DLL.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

char Amin_coding[255];
char Amin_p_jomle[42];

// CPrn_BornaDlg dialog

CPrn_BornaDlg::CPrn_BornaDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CPrn_BornaDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CPrn_BornaDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CPrn_BornaDlg, CDialog)
#if defined(_DEVICE_RESOLUTION_AWARE) && !defined(WIN32_PLATFORM_WFSP)
	ON_WM_SIZE()
#endif
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1, &CPrn_BornaDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CPrn_BornaDlg message handlers

BOOL CPrn_BornaDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

#if defined(_DEVICE_RESOLUTION_AWARE) && !defined(WIN32_PLATFORM_WFSP)
void CPrn_BornaDlg::OnSize(UINT /*nType*/, int /*cx*/, int /*cy*/)
{
	if (AfxIsDRAEnabled())
	{
		DRA::RelayoutDialog(
			AfxGetResourceHandle(), 
			this->m_hWnd, 
			DRA::GetDisplayMode() != DRA::Portrait ? 
			MAKEINTRESOURCE(IDD_PRN_BORNA_DIALOG_WIDE) : 
			MAKEINTRESOURCE(IDD_PRN_BORNA_DIALOG));
	}
}
#endif

void amin_clean()
{
	for (int q = 0 ; q <= 255 ; q++)
	{
		Amin_coding[q] = 127;
	}
}

void amin_start()
{
	amin_clean();

	Amin_coding[58] = ':';
	Amin_coding[127] = ' ';
	Amin_coding[128] = '0';
	Amin_coding[129] = '1';
	Amin_coding[130] = '2';
	Amin_coding[131] = '3';
	Amin_coding[132] = '4';
	Amin_coding[133] = '5';
	Amin_coding[134] = '6';
	Amin_coding[135] = '7';
	Amin_coding[136] = '8';
	Amin_coding[137] = '9';
	Amin_coding[140] = '?';
	Amin_coding[141] = 'آ';
	Amin_coding[144] = 'ا';
	Amin_coding[147] = 'ب';
	Amin_coding[149] = 'پ';
	Amin_coding[151] = 'ت';
	Amin_coding[153] = 'ث';
	Amin_coding[155] = 'ج';
	Amin_coding[157] = 'چ';
	Amin_coding[159] = 'ح';
	Amin_coding[161] = 'خ';
	Amin_coding[162] = 'د';
	Amin_coding[163] = 'ذ';
	Amin_coding[164] = 'ر';
	Amin_coding[165] = 'ز';
	Amin_coding[166] = 'ژ';
	Amin_coding[168] = 'س';
	Amin_coding[170] = 'ش';
	Amin_coding[172] = 'ص';
	Amin_coding[174] = 'ض';
	Amin_coding[175] = 'ط';
	Amin_coding[224] = 'ظ';
	Amin_coding[228] = 'ع';
	Amin_coding[232] = 'غ';
	Amin_coding[234] = 'ف';
	Amin_coding[236] = 'ق';
	Amin_coding[238] = 'ک';
	Amin_coding[240] = 'گ';
	Amin_coding[243] = 'ل';
	Amin_coding[245] = 'م';
	Amin_coding[247] = 'ن';
	Amin_coding[248] = 'و';
	Amin_coding[251] = 'ه';
	Amin_coding[254] = 'ی';
}

void amin_mid()
{
	amin_clean();

	Amin_coding[58] = ':';
	Amin_coding[127] = ' ';
	Amin_coding[128] = '0';
	Amin_coding[129] = '1';
	Amin_coding[130] = '2';
	Amin_coding[131] = '3';
	Amin_coding[132] = '4';
	Amin_coding[133] = '5';
	Amin_coding[134] = '6';
	Amin_coding[135] = '7';
	Amin_coding[136] = '8';
	Amin_coding[137] = '9';
	Amin_coding[140] = '?';
	Amin_coding[141] = 'آ';
	Amin_coding[145] = 'ا';
	Amin_coding[147] = 'ب';
	Amin_coding[149] = 'پ';
	Amin_coding[151] = 'ت';
	Amin_coding[153] = 'ث';
	Amin_coding[155] = 'ج';
	Amin_coding[157] = 'چ';
	Amin_coding[159] = 'ح';
	Amin_coding[161] = 'خ';
	Amin_coding[162] = 'د';
	Amin_coding[163] = 'ذ';
	Amin_coding[164] = 'ر';
	Amin_coding[165] = 'ز';
	Amin_coding[166] = 'ژ';
	Amin_coding[168] = 'س';
	Amin_coding[170] = 'ش';
	Amin_coding[172] = 'ص';
	Amin_coding[174] = 'ض';
	Amin_coding[175] = 'ط';
	Amin_coding[224] = 'ظ';
	Amin_coding[227] = 'ع';
	Amin_coding[231] = 'غ';
	Amin_coding[234] = 'ف';
	Amin_coding[236] = 'ق';
	Amin_coding[238] = 'ک';
	Amin_coding[240] = 'گ';
	Amin_coding[243] = 'ل';
	Amin_coding[245] = 'م';
	Amin_coding[247] = 'ن';
	Amin_coding[248] = 'و';
	Amin_coding[250] = 'ه';
	Amin_coding[254] = 'ی';
}

void amin_end()
{
	amin_clean();

	Amin_coding[58] = ':';
	Amin_coding[127] = ' ';
	Amin_coding[128] = '0';
	Amin_coding[129] = '1';
	Amin_coding[130] = '2';
	Amin_coding[131] = '3';
	Amin_coding[132] = '4';
	Amin_coding[133] = '5';
	Amin_coding[134] = '6';
	Amin_coding[135] = '7';
	Amin_coding[136] = '8';
	Amin_coding[137] = '9';
	Amin_coding[140] = '?';
	Amin_coding[141] = 'آ';
	Amin_coding[145] = 'ا';
	Amin_coding[146] = 'ب';
	Amin_coding[148] = 'پ';
	Amin_coding[150] = 'ت';
	Amin_coding[152] = 'ث';
	Amin_coding[154] = 'ج';
	Amin_coding[156] = 'چ';
	Amin_coding[158] = 'ح';
	Amin_coding[160] = 'خ';
	Amin_coding[162] = 'د';
	Amin_coding[163] = 'ذ';
	Amin_coding[164] = 'ر';
	Amin_coding[165] = 'ز';
	Amin_coding[166] = 'ژ';
	Amin_coding[167] = 'س';
	Amin_coding[169] = 'ش';
	Amin_coding[171] = 'ص';
	Amin_coding[173] = 'ض';
	Amin_coding[175] = 'ط';
	Amin_coding[224] = 'ظ';
	Amin_coding[225] = 'ع';
	Amin_coding[229] = 'غ';
	Amin_coding[233] = 'ف';
	Amin_coding[235] = 'ق';
	Amin_coding[237] = 'ک';
	Amin_coding[239] = 'گ';
	Amin_coding[241] = 'ل';
	Amin_coding[244] = 'م';
	Amin_coding[246] = 'ن';
	Amin_coding[248] = 'و';
	Amin_coding[249] = 'ه';
	Amin_coding[253] = 'ی';
}

bool amin_change_to_persian(char main_char[])
{
	for (int q = 0 ; q < 42 ; q++)
	{
		Amin_p_jomle[q] = 127;
	}
	
	for (int q = 0 ; q < strlen(main_char) ; q++)
	{
		if (q == 0)
			amin_start();

		else if (((q < strlen(main_char) && (main_char[q+1] != ' '))) && (q != (strlen(main_char) - 1)))
			amin_mid();

		else if ((q == (strlen(main_char) - 1)) || (main_char[q+1] == ' '))
			amin_end();

		for (int w = 0 ; w <= 255 ; w++)
		{
			if (main_char[q] == Amin_coding[w])
			{
				Amin_p_jomle[(42 - q)] = w;
			}
		}
	}
	return(TRUE);
}

void CPrn_BornaDlg::OnBnClickedButton1()
{
	if(PRINTER_OK != PrinterOpen())
	{
		MessageBox(L"[Error] PrinterOpen"); 
		return;
	}

	PrinterSetCodeTable(27);

	char main_char[42] = "                برگه رسید                ";
	if (amin_change_to_persian(main_char) == TRUE)
		PrinterPrint2(Amin_p_jomle);

	PrinterLineFeed(1);

	//for (int q = 0 ; q < strlen(main_char) ; q++){main_char[q] = ' ';}
	//strncpy(main_char + 2 ,  , 14);

	char main_char2[] = "شماره صندوق : ";
	PrinterSetAlign(PRINTER_ALIGN_RIGHT);
	if (amin_change_to_persian(main_char2) == TRUE)
		PrinterPrint2(Amin_p_jomle);

	PrinterSetAlign(PRINTER_ALIGN_LEFT);
	PrinterPrint2("100000");

	//char main_char3[] = "مبلغ صندوق : ";
	//strcat(main_char3,"120.000");

	//char main_char4[] = "تخلیه گر :";
	//strcat(main_char4,"امین گلمکانی");

	//char main_char5[] = "تاریخ : ";
	//strcat(main_char5,"1390/06/01");

	//char main_char6[] = "ساعت : ";
	//strcat(main_char6,"12:59");

	PrinterLineFeed(3);
	PrinterWaitComplete();
	PrinterClose();

	// TODO: Add your control notification handler code here
}
