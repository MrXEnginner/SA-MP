
#pragma once

#define GAMESTATE_CONNECTED		5

#define GAMESTATE_WAIT_CONNECT	1

struct struc_41
{
	bool bUseCJWalk;
	int field_1;
	char _gap5[17];
	float field_16;
	char field_1A;
	char _gap1B[4];
	char field_1F;
	char field_20;
	char field_21;
	char field_22;
	int field_23;
	float field_27;
	char _gap2B;
	char field_2C;
	char field_2D;
	char field_2E;
	char field_2F;
	char _gap30[10];
};

typedef struct _NETGAME_POOLS {
	CVehiclePool	*pVehiclePool;
	CPlayerPool		*pPlayerPool;
	CPickupPool		*pPickupPool;
	CObjectPool		*pObjectPool;
	CActorPool		*pActorPool;
	CGangZonePool	*pGangZonePool;
	CLabelPool		*pLabelPool;
	CTextDrawPool	*pTextDrawPool;
	CMenuPool		*pMenuPool;
} NETGAME_POOLS;

class CNetGame // size: 994
{
private:

	RakClientInterface	*m_pRakClient;

	void UpdateNetwork();

	char _gap4[44];
	char m_szHostOrIp[257];
	char m_szHostName[257];
	char field_232;
	char field_233;
	char field_234;
	int m_iPort;
	int field_239;
	DWORD		m_dwMapIcon[100];
	int m_iGameState;
	int field_3D1;
	struc_41 *field_3D5;
	char field_3D9;
	char _gap3DA[4];
	NETGAME_POOLS* m_pPools;

public:

	CNetGame(PCHAR szHostOrIp,int iPort,PCHAR szPlayerName,PCHAR szPass);

	void Process();

	void InitPools();

	DWORD GetTime();
	int GetGameState() { return m_iGameState; };
	BOOL GetWalkStyle() { return field_3D5->bUseCJWalk; };

	CPlayerPool * GetPlayerPool() { return m_pPools->pPlayerPool; };
	CGangZonePool * GetGangZonePool() { return m_pPools->pGangZonePool; };
	RakClientInterface * GetRakClient() { return m_pRakClient; };

	void  ResetMapIcons();
	void  SetMapIcon(BYTE byteIndex, float fX, float fY, float fZ, BYTE byteIcon, DWORD dwColor, int iStyle);
	void  DisableMapIcon(BYTE byteIndex);
};
