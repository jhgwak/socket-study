#pragma once

// CDataSocket ��� ����Դϴ�.
class CServer_UDPDlg;
class CDataSocket : public CSocket
{
public:
	CDataSocket(CServer_UDPDlg *pDlg);
	CServer_UDPDlg *m_pDlg;
	virtual ~CDataSocket();
//	virtual void OnAccept(int nErrorCode);
	virtual void OnReceive(int nErrorCode);
	virtual void OnClose(int nErrorCode);
};


