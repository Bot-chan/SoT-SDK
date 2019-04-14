#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_ItemInfo_Weeping+_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_ItemInfo_Weeping+.BP_TreasureChest_ItemInfo_Weeping+_C
// 0x0008 (0x0708 - 0x0700)
class ABP_TreasureChest_ItemInfo_Weeping__C : public AWeepingChestItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureChest_ItemInfo_Weeping+.BP_TreasureChest_ItemInfo_Weeping+_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
