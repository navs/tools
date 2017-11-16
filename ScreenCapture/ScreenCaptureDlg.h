
// ScreenCaptureDlg.h : ��� ����
//

#pragma once


// CScreenCaptureDlg ��ȭ ����
class CScreenCaptureDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CScreenCaptureDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SCREENCAPTURE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.

	int mCaptureCount = 0;
	POINT mPoints[2];

// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	BOOL mCaptureMode;
	afx_msg void OnBnClickedCheckCaptureMode();

	BOOL UpdateMouseAction(WPARAM wParam, LPARAM lParam);
	CString mMouseInfo;
	afx_msg void OnNcPaint();
	afx_msg BOOL OnNcActivate(BOOL bActive);
};
