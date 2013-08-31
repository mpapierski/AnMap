#if !defined(AFX_MINIVIEW_H__BF768FC1_E0D9_4558_A31E_95EEEAFC0219__INCLUDED_)
#define AFX_MINIVIEW_H__BF768FC1_E0D9_4558_A31E_95EEEAFC0219__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MiniView.h : header file
//

#include <wx/docview.h>

/////////////////////////////////////////////////////////////////////////////
// CMiniView view

class CMiniView : public wxView
{
protected:
	CMiniView();           // protected constructor used by dynamic creation
	DECLARE_DYNAMIC_CLASS(CMiniView)

// Attributes
public:
	CAnMapDoc* GetDocument() { return (CAnMapDoc*)m_pDoc; }
	CAnMapDoc* m_pDoc;
	wxDC * BufferDC;
	wxDC * OffDC;
	wxDC * BackDC;
	short m_sTmp;
	wxRect m_rtClient;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMiniView)
	public:
	virtual void OnInitialUpdate();
	protected:
	void OnDraw(wxDC & pDC);      // overridden to draw this view
	//}}AFX_VIRTUAL

// Implementation
public:
	void UpdateScreen();
	void LoadMinimap();
	void DrawMinimap(short sx, short sy);
	virtual ~CMiniView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CMiniView)
#if 0
	void OnLButtonDown(UINT nFlags, CPoint point);
	void OnLButtonUp(UINT nFlags, CPoint point);
	void OnMouseMove(UINT nFlags, CPoint point);
	void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	void OnSize(UINT nType, int cx, int cy);
	void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
#endif
	//}}AFX_MSG
	DECLARE_EVENT_TABLE()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MINIVIEW_H__BF768FC1_E0D9_4558_A31E_95EEEAFC0219__INCLUDED_)
