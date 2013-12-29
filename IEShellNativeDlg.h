
// IEShellNativeDlg.h : 头文件
//

#pragma once
#include "WebBrowser.h"


// CIEShellNativeDlg 对话框
class CIEShellNativeDlg : public CDialogEx
{
// 构造
public:
	CIEShellNativeDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_IESHELLNATIVE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CWebbrowser m_browser;
};
