// AnMapView.h : interface of the CAnMapView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ANMAPVIEW_H__994670CC_691F_42CD_BB74_C8FE6ADE6A06__INCLUDED_)
#define AFX_ANMAPVIEW_H__994670CC_691F_42CD_BB74_C8FE6ADE6A06__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <wx/wx.h>

class CAnMapView : public wxScrolledWindow
{
protected: // create from serialization only
	CAnMapView();
	DECLARE_DYNAMIC_CLASS(CAnMapView)

// Attributes
public:
// Operations
public:
	void OnProperties();


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAnMapView)
	public:
	void OnDraw(wxDC& pDC);  // overridden to draw this view
#if 0
	virtual BOOL OnScroll(UINT nScrollCode, UINT nPos, BOOL bDoScroll = TRUE);
#endif
	protected:
#if 0
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnActivateView(BOOL bActivate, CView* pActivateView, CView* pDeactiveView);
#endif
	//}}AFX_VIRTUAL

// Implementation
public:
	CAnMapDoc* GetDocument() { return (CAnMapDoc*)m_pDoc; }
	CAnMapDoc* m_pDoc;
	wxDC * BufferDC;
	wxRect m_rtClient;
	wxPoint m_ptClipping;
	wxPoint m_ptScroll;
	unsigned int m_nAutoSaveTimer;
	unsigned int m_nCursorTimer;
	bool m_bCursor;
	void SetStatusText( int iPane, wxString str);
	void DrawLimitLine();
	void RenderBrush();
	void RenderTile();
	void UpdateScreen();
	virtual ~CAnMapView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// Generated message map functions
protected:
	//{{AFX_MSG(CAnMapView)
#if 0
	void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	void OnSize(UINT nType, int cx, int cy);
	void OnMouseMove(UINT nFlags, CPoint point);
	void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
	BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	void OnLButtonDown(UINT nFlags, CPoint point);
	BOOL OnEraseBkgnd(CDC* pDC);
	void OnLButtonUp(UINT nFlags, CPoint point);
	void OnRButtonDown(UINT nFlags, CPoint point);
	void OnRButtonUp(UINT nFlags, CPoint point);
	void OnTimer(UINT nIDEvent);
	void OnDestroy();
#endif
	//}}AFX_MSG
	DECLARE_EVENT_TABLE()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ANMAPVIEW_H__994670CC_691F_42CD_BB74_C8FE6ADE6A06__INCLUDED_)
