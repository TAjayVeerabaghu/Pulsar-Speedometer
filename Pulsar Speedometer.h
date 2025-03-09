// Pulsar Speedometer.h : main header file for the PULSAR SPEEDOMETER application
//

#if !defined(AFX_PULSARSPEEDOMETER_H__69151140_D132_4A27_A2E5_FECBB3DCEB60__INCLUDED_)
#define AFX_PULSARSPEEDOMETER_H__69151140_D132_4A27_A2E5_FECBB3DCEB60__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CPulsarSpeedometerApp:
// See Pulsar Speedometer.cpp for the implementation of this class
//

class CPulsarSpeedometerApp : public CWinApp
{
public:
	CPulsarSpeedometerApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPulsarSpeedometerApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CPulsarSpeedometerApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PULSARSPEEDOMETER_H__69151140_D132_4A27_A2E5_FECBB3DCEB60__INCLUDED_)
