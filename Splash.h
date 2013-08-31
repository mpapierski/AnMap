#if !defined(AFX_SPLASH_H__B8ECDB49_4C7D_4932_ADC6_A75E114093FB__INCLUDED_)
#define AFX_SPLASH_H__B8ECDB49_4C7D_4932_ADC6_A75E114093FB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Splash.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSplash dialog

class CSplash : public wxDialog
{
// Construction
public:
	CSplash(wxWindow* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSplash)
	enum { IDD = IDD_SPLASH };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSplash)
	protected:
#if 0
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
#endif
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSplash)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_EVENT_TABLE()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPLASH_H__B8ECDB49_4C7D_4932_ADC6_A75E114093FB__INCLUDED_)
