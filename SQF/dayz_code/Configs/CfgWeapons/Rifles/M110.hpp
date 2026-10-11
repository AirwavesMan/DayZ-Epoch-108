class M110_NVG_EP1;
class DZE_Wep_M110_NV: M110_NVG_EP1 {
	displayName = "$STR_DZ_WPN_M110_NV_NAME";
	descriptionShort = "$STR_DZ_WPN_M110_NV_DESC";
	class OpticsModes {
		class HTWS {
			useModelOptics = "true";
			memoryPointCamera = "eye";
			opticsFlare = "true";
			opticsDisablePeripherialVision = "true";
			cameraDir = "";
			opticsID = 1;
			opticsZoomMin = 0.0293;
			distanceZoomMin = 300;
			opticsZoomMax = 0.0293;
			distanceZoomMax = 300;
			opticsZoomInit = 0.0293;
			opticsPPEffects[] = {};
			visionMode[] = {"Normal","NVG"};
			thermalMode[] = {};
			discretefov[] = {0.0755,0.0249};
			discreteInitIndex = 0;
			discreteDistance[] = {100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 2;
		};
	};
};