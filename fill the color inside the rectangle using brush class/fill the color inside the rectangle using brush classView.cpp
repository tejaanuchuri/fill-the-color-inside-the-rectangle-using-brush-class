
// fill the color inside the rectangle using brush classView.cpp : implementation of the CfillthecolorinsidetherectangleusingbrushclassView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "fill the color inside the rectangle using brush class.h"
#endif

#include "fill the color inside the rectangle using brush classDoc.h"
#include "fill the color inside the rectangle using brush classView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CfillthecolorinsidetherectangleusingbrushclassView

IMPLEMENT_DYNCREATE(CfillthecolorinsidetherectangleusingbrushclassView, CView)

BEGIN_MESSAGE_MAP(CfillthecolorinsidetherectangleusingbrushclassView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CfillthecolorinsidetherectangleusingbrushclassView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CfillthecolorinsidetherectangleusingbrushclassView construction/destruction

CfillthecolorinsidetherectangleusingbrushclassView::CfillthecolorinsidetherectangleusingbrushclassView() noexcept
{
	// TODO: add construction code here

}

CfillthecolorinsidetherectangleusingbrushclassView::~CfillthecolorinsidetherectangleusingbrushclassView()
{
}

BOOL CfillthecolorinsidetherectangleusingbrushclassView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CfillthecolorinsidetherectangleusingbrushclassView drawing

void CfillthecolorinsidetherectangleusingbrushclassView::OnDraw(CDC* pDC)
{
	CBrush brush(RGB(100,150,200));
	pDC->SelectObject(&brush);
	pDC->Rectangle(100, 120, 230, 185);

	CfillthecolorinsidetherectangleusingbrushclassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CfillthecolorinsidetherectangleusingbrushclassView printing


void CfillthecolorinsidetherectangleusingbrushclassView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CfillthecolorinsidetherectangleusingbrushclassView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CfillthecolorinsidetherectangleusingbrushclassView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CfillthecolorinsidetherectangleusingbrushclassView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CfillthecolorinsidetherectangleusingbrushclassView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CfillthecolorinsidetherectangleusingbrushclassView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CfillthecolorinsidetherectangleusingbrushclassView diagnostics

#ifdef _DEBUG
void CfillthecolorinsidetherectangleusingbrushclassView::AssertValid() const
{
	CView::AssertValid();
}

void CfillthecolorinsidetherectangleusingbrushclassView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CfillthecolorinsidetherectangleusingbrushclassDoc* CfillthecolorinsidetherectangleusingbrushclassView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CfillthecolorinsidetherectangleusingbrushclassDoc)));
	return (CfillthecolorinsidetherectangleusingbrushclassDoc*)m_pDocument;
}
#endif //_DEBUG


// CfillthecolorinsidetherectangleusingbrushclassView message handlers
