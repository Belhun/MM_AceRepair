#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {

        };
        weapons[] = { };
        magazines[] = { };
        requiredAddons[] = {
        };
        author = "Belhun";
        authors[] = {"Belhun"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};
class CfgMods {
    class PREFIX {
        dir = "@MM_aceRepair";
        name = "MM - Ace Repair";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = CSTRING(URL);
        description = "Issue Tracker: https://github.com/(insertname)/MM/issues";
    };
};


// #include "CfgFunctions.hpp"
// #include "CfgEventHandlers.hpp"
// #include "CfgVehicles.hpp"
// #include "CfgSounds.hpp"
