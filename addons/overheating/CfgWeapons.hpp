class CfgWeapons {
    class ACE_ItemCore;
    class InventoryItem_Base_F;

    class ACE_SpareBarrel: ACE_ItemCore {
        displayname = CSTRING(SpareBarrelName);
        descriptionshort = CSTRING(SpareBarrelDescription);
        //model = "";
        picture = QUOTE(PATHTOF(UI\spare_barrel_ca.paa));
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 30;
        };
    };

    class RifleCore;
    class Rifle: RifleCore {
        //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
        ACE_MRBS = 3000;

        //Dispersion Factor (this will be scaled based on the barrel temp)
        ACE_Dispersion = 1;

        //Slowdown Factor (this will be scaled based on the barrel temp)
        ACE_SlowdownFactor = 1;
    };
    class Rifle_Base_F : Rifle {};
    class Rifle_Long_Base_F : Rifle_Base_F {
        ACE_Dispersion = 0.75;
    };

    class arifle_MX_Base_F : Rifle_Base_F {
        ACE_clearJamAction = "GestureReloadMX";   // Custom jam clearing action. Default uses reload animation.
    };
    class arifle_MX_SW_F : arifle_MX_Base_F {
        ACE_clearJamAction = "";              // Custom jam clearing action. Use empty string to undefine.
        ACE_Overheating_allowSwapBarrel = 1;  // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
        ACE_Dispersion = 0.75;
    };
    class MMG_01_base_F: Rifle_Long_Base_F {
        ACE_Overheating_allowSwapBarrel = 1;
    };
    class MMG_02_base_F: Rifle_Long_Base_F {
        ACE_Overheating_allowSwapBarrel = 1;
    };
    class LMG_Zafir_F : Rifle_Long_Base_F {
        ACE_Overheating_allowSwapBarrel = 1;
    };
    class LMG_Mk200_F : Rifle_Long_Base_F {
        ACE_Overheating_allowSwapBarrel = 1;
    };
};
