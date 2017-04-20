#pragma once

class IClientEntity;
class IClientUnknown;
class IClientNetworkable;

class IClientEntityList
{
public:
	virtual IClientNetworkable* GetClientNetworkable(int iEnt) = 0;
	virtual IClientNetworkable* GetClientNetworkableFromHandle(CBaseHandle hEnt) = 0;
	virtual IClientUnknown* GetClientUnknownFromHandle(CBaseHandle hEnt) = 0;
	virtual IClientEntity* GetClientEntity(int iEnt) = 0;
	virtual IClientEntity* GetClientEntityFromHandle(CBaseHandle hEnt) = 0;
	virtual int NumberOfEntities(bool bIncludeNonNetworkable) = 0;
	virtual int GetHighestEntityIndex() = 0;
	virtual void SetMaxEntities(int iMax) = 0;
	virtual int GetMaxEntities() = 0;
};

#define VCLIENTENTITYLIST_INTERFACE_VERSION "VClientEntityList003"
extern IClientEntityList* g_pEntityList;
