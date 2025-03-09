// Pulsar SpeedometerDlg.h : header file
//

#if !defined(AFX_PULSARSPEEDOMETERDLG_H__855BB8CF_B0CA_44B5_A948_083E131A74E4__INCLUDED_)
#define AFX_PULSARSPEEDOMETERDLG_H__855BB8CF_B0CA_44B5_A948_083E131A74E4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CPulsarSpeedometerDlg dialog

class CPulsarSpeedometerDlg : public CDialog
{
// Construction
public:
	CPulsarSpeedometerDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CPulsarSpeedometerDlg)
	enum { IDD = IDD_PULSARSPEEDOMETER_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPulsarSpeedometerDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CPulsarSpeedometerDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PULSARSPEEDOMETERDLG_H__855BB8CF_B0CA_44B5_A948_083E131A74E4__INCLUDED_)
