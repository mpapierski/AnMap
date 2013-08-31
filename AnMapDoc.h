// AnMapDoc.h : interface of the CAnMapDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ANMAPDOC_H__843368A7_DBA1_4162_AA84_666F430B9EF4__INCLUDED_)
#define AFX_ANMAPDOC_H__843368A7_DBA1_4162_AA84_666F430B9EF4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TileSpr.h"
#include "brushview.h"
#include "AnMapView.h"
#include "MiniView.h"
#include "Sprite.h"
#include "Undo.h"

class CAnMapDoc : public wxDocument
{
protected: // create from serialization only
	CAnMapDoc();
	DECLARE_DYNAMIC_CLASS(CAnMapDoc)

// Attributes
public:
	CAnMapApp	*m_pApp;
	bool		m_bWorkMode;//TRUE이면 타일찍기 모드, FALSE이면 브러쉬 선택 모드
	char		m_cWorkMode;//0:일반타일 1:Moveable 2:Teleport 3:Farming
	short		m_sMapDataSizeX, m_sMapDataSizeY;
	short		m_sBrsX1, m_sBrsY1;
	short		m_sBrsX2, m_sBrsY2;
	int			m_iTileMode;//TileMode - 0:일반타일 1:나무 2:구조물
	int			m_iHowManyUndo;
	int			m_iIndexUndo;
	int			m_iBrushIndex;
	int			m_iSelBrush;
	int			m_iSelTree;
	int			m_iObjectIndex;
	int			m_iSelObject;
	int			m_iBrushMode;
	int			m_iTempX, m_iTempY;
	bool		m_bModified;
	bool		m_bGrid;
	bool		m_bTree;
	bool		m_bActivated;
	bool		m_bReadyMiniView;
	bool		m_bReadyAnMapView;
	bool		m_bAutoSave;
	unsigned int		m_dwAutoSaveDelay;
	unsigned int		m_dwCursorDelay;
	unsigned int		m_dwScrollTime;
	unsigned int		m_dwScrollDelay;
	CUndo		*m_pUndo[DEF_MAX_UNDO];
#if 0
	HANDLE		m_hMutex;
#endif
	wxPoint		m_ScrollPt;
	wxPoint		m_mousept;
	wxPoint		m_edit1, m_edit2, m_memsize;
	wxString	m_filename;
	wxString	m_pathname;
	CSprite		*m_pSprite[DEF_MAXSPRITES];
	CTileSpr	m_tile[752][752];
	CTileSpr	m_mTile[752][752];
	CMiniView	*m_pMiniView;
	CAnMapView	*m_pRightView;
	CBrushView	*m_pBrushView;

// Operations
public:
	CUndo* MakeUndo();
	void CopyTile( CTileSpr* pDstTile, CTileSpr* pSrcTile );
	bool IsBrushMatched( int i, short mx, short my );
	void ChangeBrush(int iDir);
	void SelectBrush(int iDir);
	bool _bDecodeMapInfo( char * pHeader );
	bool bOpenMapDataFile( wxString cFn );
	void OnKeyDown( wxKeyEvent & nChar);
	void OnKeyUp(wxKeyEvent & nChar);
	void OnLButtonDown(wxEvent & nFlags);
	void OnLButtonUp(wxEvent & nFlags);
	void OnRButtonDown(wxEvent & nFlags);
	void OnRButtonUp(wxEvent & nFlags);
	void OnMouseMove(wxEvent & nFlags);
	void SaveFileAs();
	void SaveMapData( wxString cFn );
	void OnBrushMode( int iBrushIndex );
	void PutTile( bool bMakeUndo );
	void PutTree( bool bMakeUndo );
	void PutObject( bool bMakeUndo );
	void SetRightView( CAnMapView* pView );
	void SetMiniView( CMiniView* pView );
	void SetBrushView( CBrushView* pView);
	void SelectTerrain(int iTerrain);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAnMapDoc)
	//}}AFX_VIRTUAL

// Implementation
public:
	void SetModify();
	void ThreadJob();
	void UpdateScreen();
	void MakeSprite( char* FileName, short sStart, short sCount);
	virtual ~CAnMapDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// Generated message map functions
protected:
	//{{AFX_MSG(CAnMapDoc)
	void OnFileSaveAs();
	void OnUpdateFileSaveAs(wxUpdateUIEvent & event);
	void OnFileOpen();
	void OnFileSave();
	void OnMoveLeft();
	void OnMoveRight();
	void OnMoveUp();
	void OnMoveDown();
	void OnFileNew();
	void OnViewGrid();
	void OnViewTree();
	void OnUpdateViewGrid(wxUpdateUIEvent & event);
	void OnUpdateViewTree(wxUpdateUIEvent & event);
	void OnEditUndo();
	void OnEditRedo();
	void OnCheckBlank();
	void OnViewRender();
	void OnEditCopy();
	void OnEditPaste();
	void OnUpdateEditUndo(wxUpdateUIEvent & event);
	void OnUpdateEditRedo(wxUpdateUIEvent & event);
	void OnUpdateEditPaste(wxUpdateUIEvent & event);
	void OnUpdateEditCopy(wxUpdateUIEvent & event);
	void OnToolOption();
	//}}AFX_MSG
	DECLARE_EVENT_TABLE()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ANMAPDOC_H__843368A7_DBA1_4162_AA84_666F430B9EF4__INCLUDED_)
