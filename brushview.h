// BrushView.h : interface of the CBrushView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_BrushView_H__2F3FB1B3_63A4_4C19_A08F_3CC1E3160AF2__INCLUDED_)
#define AFX_BrushView_H__2F3FB1B3_63A4_4C19_A08F_3CC1E3160AF2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <wx/treectrl.h>

class CAnMapDoc;

class CBrushView : public wxTreeCtrl
{
protected: // create from serialization only
	CBrushView();
	DECLARE_DYNAMIC_CLASS(CBrushView)

// Attributes
public:
	CAnMapDoc* GetDocument() { return (CAnMapDoc*)m_pDoc; }
	CAnMapDoc* m_pDoc;

// Operations
public:
	void SetSelectedItem( int iBrushIndex );

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBrushView)
	public:
	virtual void OnDraw(wxDC& pDC);  // overridden to draw this view
#if 0
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
#endif
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CBrushView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// Generated message map functions
protected:
	//{{AFX_MSG(CBrushView)
#if 0
	afx_msg void OnSelchanged(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
#endif
	//}}AFX_MSG
	DECLARE_EVENT_TABLE()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BrushView_H__2F3FB1B3_63A4_4C19_A08F_3CC1E3160AF2__INCLUDED_)
