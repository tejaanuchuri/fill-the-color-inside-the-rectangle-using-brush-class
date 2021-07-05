
// fill the color inside the rectangle using brush class.h : main header file for the fill the color inside the rectangle using brush class application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CfillthecolorinsidetherectangleusingbrushclassApp:
// See fill the color inside the rectangle using brush class.cpp for the implementation of this class
//

class CfillthecolorinsidetherectangleusingbrushclassApp : public CWinAppEx
{
public:
	CfillthecolorinsidetherectangleusingbrushclassApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CfillthecolorinsidetherectangleusingbrushclassApp theApp;
