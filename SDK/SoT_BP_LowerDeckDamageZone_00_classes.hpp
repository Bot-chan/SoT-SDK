#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LowerDeckDamageZone_00_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LowerDeckDamageZone_00.BP_LowerDeckDamageZone_00_C
// 0x0000 (0x08C0 - 0x08C0)
class ABP_LowerDeckDamageZone_00_C : public ABP_BaseInternalDamageZone_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LowerDeckDamageZone_00.BP_LowerDeckDamageZone_00_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
