
// Cilend_UDP.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CCilend_UDPApp:
// �� Ŭ������ ������ ���ؼ��� Cilend_UDP.cpp�� �����Ͻʽÿ�.
//

class CCilend_UDPApp : public CWinApp
{
public:
	CCilend_UDPApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CCilend_UDPApp theApp;