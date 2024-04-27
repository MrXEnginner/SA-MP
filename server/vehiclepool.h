
#ifndef SAMPSRV_VEHICLEPOOL_H
#define SAMPSRV_VEHICLEPOOL_H

class CVehiclePool // size: WL 24216
{
private:
	char field_0[212];
	int field_D4[2000];
	int field_2014[2000];
	int field_3F54[2000];
	int m_iPoolSize;

public:
	CVehiclePool();
	~CVehiclePool();

	BOOL Delete(VEHICLEID VehicleID);

	int GetModelCount();

	int GetPoolSize() { return m_iPoolSize; };
};

#endif
