
#include "main.h"

CVehiclePool::CVehiclePool()
{
	for(VEHICLEID VehicleID = 0; VehicleID != MAX_VEHICLES; VehicleID++) {
		field_2014[VehicleID] = 0;
		field_3F54[VehicleID] = 0;
		field_D4[VehicleID] = 0;
	}
	memset(field_0,0,sizeof(field_0));
	m_iPoolSize = 0;
}

CVehiclePool::~CVehiclePool()
{
	for(VEHICLEID VehicleID = 0; VehicleID != MAX_VEHICLES; VehicleID++) {
		Delete(VehicleID);
	}
}

BOOL CVehiclePool::Delete(VEHICLEID VehicleID)
{
	// TODO: CVehiclePool::Delete W .text:00467700 L .text:0814CC10
	return FALSE;
}

int CVehiclePool::GetModelCount()
{
	int iCount=0;
	for (int i=0; i!=212; i++) {
		if(field_0[i]) {
			iCount++;
		}
	}
	return iCount;
}
