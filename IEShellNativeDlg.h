
// IEShellNativeDlg.h : ͷ�ļ�
//

#pragma once
#include "WebBrowser.h"


// CIEShellNativeDlg �Ի���
class CIEShellNativeDlg : public CDialogEx
{
// ����
public:
	CIEShellNativeDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_IESHELLNATIVE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CWebbrowser m_browser;
};
