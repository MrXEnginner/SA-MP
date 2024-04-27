
#ifndef SAMPSRV_ACTORPOOL_H
#define SAMPSRV_ACTORPOOL_H

class CActorPool // size: WL 12004
{
private:
	int field_0[1000];
	int field_FA0[1000];
	int field_1F40[1000];
	int m_iPoolSize;
public:
	CActorPool();
	~CActorPool();

	BOOL Delete(ACTORID ActorID);

	int GetPoolSize() { return m_iPoolSize; };
};

#endif
