
// fill the color inside the rectangle using brush classView.h : interface of the CfillthecolorinsidetherectangleusingbrushclassView class
//

#pragma once


class CfillthecolorinsidetherectangleusingbrushclassView : public CView
{
protected: // create from serialization only
	CfillthecolorinsidetherectangleusingbrushclassView() noexcept;
	DECLARE_DYNCREATE(CfillthecolorinsidetherectangleusingbrushclassView)

// Attributes
public:
	CfillthecolorinsidetherectangleusingbrushclassDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CfillthecolorinsidetherectangleusingbrushclassView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in fill the color inside the rectangle using brush classView.cpp
inline CfillthecolorinsidetherectangleusingbrushclassDoc* CfillthecolorinsidetherectangleusingbrushclassView::GetDocument() const
   { return reinterpret_cast<CfillthecolorinsidetherectangleusingbrushclassDoc*>(m_pDocument); }
#endif

