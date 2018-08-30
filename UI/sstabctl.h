#if !defined(AFX_SSTABCTL_H__D6F3A65D_49AB_4415_87AA_2CDCC60210BC__INCLUDED_)
#define AFX_SSTABCTL_H__D6F3A65D_49AB_4415_87AA_2CDCC60210BC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class COleFont;
class CPicture;

/////////////////////////////////////////////////////////////////////////////
// CSSTabCtl wrapper class

class CSSTabCtl : public CWnd
{
protected:
	DECLARE_DYNCREATE(CSSTabCtl)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xbdc217c5, 0xed16, 0x11cd, { 0x95, 0x6c, 0x0, 0x0, 0xc0, 0x4e, 0x4c, 0xa } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	unsigned long GetBackColor();
	void SetBackColor(unsigned long newValue);
	COleFont GetFont();
	void SetRefFont(LPDISPATCH newValue);
	unsigned long GetForeColor();
	void SetForeColor(unsigned long newValue);
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
	BOOL GetEnabled();
	void SetEnabled(BOOL bNewValue);
	long GetHWnd();
	void SetHWnd(long nNewValue);
	short GetTabsPerRow();
	void SetTabsPerRow(short nNewValue);
	short GetTabs();
	void SetTabs(short nNewValue);
	short GetRows();
	void SetRows(short nNewValue);
	short GetTab();
	void SetTab(short nNewValue);
	long GetTabOrientation();
	void SetTabOrientation(long nNewValue);
	CPicture GetPicture();
	void SetPicture(LPDISPATCH newValue);
	void SetRefPicture(LPDISPATCH newValue);
	BOOL GetShowFocusRect();
	void SetShowFocusRect(BOOL bNewValue);
	BOOL GetWordWrap();
	void SetWordWrap(BOOL bNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
	float GetTabHeight();
	void SetTabHeight(float newValue);
	float GetTabMaxWidth();
	void SetTabMaxWidth(float newValue);
	long GetMousePointer();
	void SetMousePointer(long nNewValue);
	CPicture GetMouseIcon();
	void SetMouseIcon(LPDISPATCH newValue);
	void SetRefMouseIcon(LPDISPATCH newValue);
	long GetOLEDropMode();
	void SetOLEDropMode(long nNewValue);
	void OLEDrag();
	CPicture GetTabPicture(short Index);
	void SetTabPicture(short Index, LPDISPATCH newValue);
	void SetRefTabPicture(short Index, LPDISPATCH newValue);
	BOOL GetTabVisible(short Index);
	void SetTabVisible(short Index, BOOL bNewValue);
	BOOL GetTabEnabled(short sIndex);
	void SetTabEnabled(short sIndex, BOOL bNewValue);
	CString GetTabCaption(short sIndex);
	void SetTabCaption(short sIndex, LPCTSTR lpszNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SSTABCTL_H__D6F3A65D_49AB_4415_87AA_2CDCC60210BC__INCLUDED_)