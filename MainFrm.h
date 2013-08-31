// MainFrm.h : interface of the CMainFrame class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINFRM_H__9F882D78_15BD_4801_8C51_6BB3498BBDA5__INCLUDED_)
#define AFX_MAINFRM_H__9F882D78_15BD_4801_8C51_6BB3498BBDA5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <wx/splitter.h>

class CAnMapView;
class CMiniView;

class CMainFrame : public wxFrame
{
	
protected: // create from serialization only
	CMainFrame();
	DECLARE_DYNAMIC_CLASS(CMainFrame)

// Attributes
public:
	wxStatusBar  m_wndStatusBar;
	wxSplitterWindow m_wndSplitter;
	wxSplitterWindow m_wndSplitter2;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMainFrame)
	public:
#if 0
	virtual bool OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
	virtual bool PreCreateWindow(CREATESTRUCT& cs);
#endif
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMainFrame();
	CAnMapView* GetRightPane();
	CMiniView* GetMiniPane();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

//protected:  // control bar embedded members
	wxToolBar    m_wndToolBar;

// Generated message map functions
protected:
	//{{AFX_MSG(CMainFrame)
#if 0
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnClose();
#endif
	//}}AFX_MSG
	DECLARE_EVENT_TABLE()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__9F882D78_15BD_4801_8C51_6BB3498BBDA5__INCLUDED_)
