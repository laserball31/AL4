class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 6500 },
            { "hgun_Pistol_heavy_02_F", "", 9850 },
            { "hgun_ACPC2_F", "", 11500 },
            { "hgun_PDW2000_F", "", 20000 },
            { "optic_ACO_grn_smg", "", 2500 },
            { "V_Rangemaster_belt", "", 4900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };
    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
            { "arifle_TRG20_F", "", 25000 },
            { "arifle_Katiba_F", "", 30000 },
            { "srifle_DMR_01_F", "", 50000 },
            { "arifle_SDAR_F", "", 20000 },
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "acc_flashlight", "", 1000 },
            { "optic_Hamr", "", 7500 },
            { "30Rnd_9x21_Mag", "", 200 },
            { "20Rnd_556x45_UW_mag", "", 125 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "30Rnd_65x39_caseless_green", "", 275 }
        };
    };
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500 },
			{ "30Rnd_9x21_Mag", "", 100 },
			{ "16Rnd_9x21_Mag", "", 60 },
			{ "hgun_Pistol_heavy_01_snds_F", "", 2000 },
			{ "11Rnd_45ACP_Mag", "", 70 },
			{ "arifle_Katiba_F", "", 30000 },
			{ "arifle_Katiba_ARCO_pointer_snds_F", "", 55000 },
			{ "30Rnd_65x39_caseless_green", "", 100 },
			{ "arifle_MXC_F", "", 40000 },
			{ "30Rnd_65x39_caseless_mag", "", 100 },
			{ "srifle_DMR_02_F", "", 50000 },
			{ "10Rnd_338_Mag", "", 125 },
			{ "MMG_01_hex_F", "", 75000 },
			{ "150Rnd_93x64_Mag", "", 250 },
			{ "srifle_GM6_F", "", 250000 },
			{ "5Rnd_127x108_Mag", "", 500 },
			{ "5Rnd_127x108_APDS_Mag", "", 1000 },
			{ "launch_RPG32_F", "", 100000 },
			{ "RPG32_F", "", 25000 },
			{ "RPG32_HE_F", "", 50000 },
			{ "optic_LRPS", "", 15000 },
			{ "optic_DMS", "", 12500 },			
			{ "optic_Aco", "", 2000 },			
			{ "optic_Arco", "", 2500 },			
			{ "optic_Hamr", "", 1000 }						

        };
    };
    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
        	{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "NVGoggles", "", 2000 },
			{ "Chemlight_red", "", 300 },
			{ "Chemlight_yellow", "", 300 },
			{ "Chemlight_green", "", 300 },
			{ "Chemlight_blue", "", 300 }
        };
    };
    //Cop Shops
    class cop_basic {
        name = "Ride-Along Equipment Store";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
			{ "hgun_P07_snds_F", "Stun Pistol", 2000 },
			{ "hgun_P07_F", "", 7500 },
			{ "HandGrenade_Stone", "Flashbang", 5000 },
			{ "Binocular", "", 550 },
			{ "ItemGPS", "", 1000 },
			{ "ToolKit", "", 250 },
			{ "muzzle_snds_L", "", 650 },
			{ "FirstAidKit", "", 500 },
			{ "Medikit", "", 1000 },
			{ "NVGoggles", "", 2000 },
			{ "16Rnd_9x21_Mag", "", 150 },
        };
    };
    class cop_patrol {
        name = "APD Tactical Store";
        side = "cop";
        license = "";
        level = 1;
        msg = "You must be a member of the Police Force!";
        items[] = {
        	{ "arifle_MX_F", "", 50000 },
			{ "SMG_02_ACO_F", "", 40000 },
			{ "HandGrenade_Stone", "Flashbang", 4000 },
			{ "MineDetector", "", 1000 },
			{ "acc_flashlight", "", 750 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_Arco", "", 2500 },
			{ "muzzle_snds_H", "", 2750 },
			{ "30Rnd_65x39_caseless_mag", "", 130 },
			{ "30Rnd_9x21_Mag", "", 250 }
        };
    };
    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level = 2;
        msg = "You must be a Sergeant Rank!";
        items[] = {
            { "SMG_02_ACO_F", "", 15000 },
			{ "hgun_ACPC2_F", "", 17500 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "arifle_MXC_F", "", 30000 },
			{ "optic_Arco", "", 2500 },
			{ "muzzle_snds_H", "", 2750 },
			{ "30Rnd_65x39_caseless_mag", "", 100 },
			{ "30Rnd_9x21_Mag", "", 60 },
			{ "9Rnd_45ACP_Mag", "", 200 }
        };
    };
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level = -1;
        items[] = {
            { "ItemGPS", "", 100 },
			{ "Binocular", "", 150 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "Medikit", "", 500 },
			{ "NVGoggles", "", 1200 },
			{ "B_FieldPack_ocamo", "", 3000 }
        };
    };
};
