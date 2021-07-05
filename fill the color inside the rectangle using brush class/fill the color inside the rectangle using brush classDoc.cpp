
// fill the color inside the rectangle using brush classDoc.cpp : implementation of the CfillthecolorinsidetherectangleusingbrushclassDoc class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "fill the color inside the rectangle using brush class.h"
#endif

#include "fill the color inside the rectangle using brush classDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CfillthecolorinsidetherectangleusingbrushclassDoc

IMPLEMENT_DYNCREATE(CfillthecolorinsidetherectangleusingbrushclassDoc, CDocument)

BEGIN_MESSAGE_MAP(CfillthecolorinsidetherectangleusingbrushclassDoc, CDocument)
END_MESSAGE_MAP()


// CfillthecolorinsidetherectangleusingbrushclassDoc construction/destruction

CfillthecolorinsidetherectangleusingbrushclassDoc::CfillthecolorinsidetherectangleusingbrushclassDoc() noexcept
{
	// TODO: add one-time construction code here

}

CfillthecolorinsidetherectangleusingbrushclassDoc::~CfillthecolorinsidetherectangleusingbrushclassDoc()
{
}

BOOL CfillthecolorinsidetherectangleusingbrushclassDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CfillthecolorinsidetherectangleusingbrushclassDoc serialization

void CfillthecolorinsidetherectangleusingbrushclassDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

#ifdef SHARED_HANDLERS

// Support for thumbnails
void CfillthecolorinsidetherectangleusingbrushclassDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// Modify this code to draw the document's data
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// Support for Search Handlers
void CfillthecolorinsidetherectangleusingbrushclassDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// Set search contents from document's data.
	// The content parts should be separated by ";"

	// For example:  strSearchContent = _T("point;rectangle;circle;ole object;");
	SetSearchContent(strSearchContent);
}

void CfillthecolorinsidetherectangleusingbrushclassDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = nullptr;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != nullptr)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CfillthecolorinsidetherectangleusingbrushclassDoc diagnostics

#ifdef _DEBUG
void CfillthecolorinsidetherectangleusingbrushclassDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CfillthecolorinsidetherectangleusingbrushclassDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CfillthecolorinsidetherectangleusingbrushclassDoc commands
