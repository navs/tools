
// ScreenCapture.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.
#include "Captures.h"

// CScreenCaptureApp:
// �� Ŭ������ ������ ���ؼ��� ScreenCapture.cpp�� �����Ͻʽÿ�.
//

class CScreenCaptureApp : public CWinApp
{
public:
	CScreenCaptureApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	Captures mCapture;

	DECLARE_MESSAGE_MAP()
};

extern CScreenCaptureApp theApp;