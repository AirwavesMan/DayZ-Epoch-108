#define DZE_MACRO_VEHICLE_CLEAR_CARGO \
	crew = ""; \
	typicalCargo[] = {}; \
	class TransportMagazines {}; \
	class TransportWeapons {};

#define DZE_MACRO_VEHICLE_SIDE \
	side = 1; \
	faction = "USMC";

// Cars, trucks, boats, bikes and ATVs.
#define DZE_MACRO_VEHICLE_CANSEE_NORMAL \
	enableGPS = 0; \
	driverCanSee = CanSeeEye + CanSeeEar + CanSeePeripheral; \
	gunnerCanSee = CanSeeEye + CanSeeOptics + CanSeeEar + CanSeePeripheral; \
	commanderCanSee = CanSeeEye + CanSeeOptics + CanSeeEar + CanSeePeripheral;

#define DZE_MACRO_VEHICLE_CANSEE_GPS_COMPASS \
	enableGPS = 1; \
	driverCanSee = CanSeeEye + CanSeeEar + CanSeeCompass + CanSeePeripheral; \
	gunnerCanSee = CanSeeEye + CanSeeOptics + CanSeeEar + CanSeeCompass + CanSeePeripheral; \
	commanderCanSee = CanSeeEye + CanSeeOptics + CanSeeEar + CanSeeCompass + CanSeePeripheral;

#define DZE_MACRO_VEHICLE_CANSEE_ALL \
	enableGPS = 1; \
	driverCanSee = CanSeeAll; \
	gunnerCanSee = CanSeeAll; \
	commanderCanSee = CanSeeAll;

// APCs and tanks use the same sensory inputs as surface vehicles.
#define DZE_MACRO_VEHICLE_CANSEE_ARMORED \
	driverCanSee = CanSeeEye + CanSeeEar + CanSeePeripheral; \
	gunnerCanSee = CanSeeEye + CanSeeOptics + CanSeeEar + CanSeePeripheral; \
	commanderCanSee = CanSeeEye + CanSeeOptics + CanSeeEar + CanSeePeripheral;

#define DZE_MACRO_VEHICLE_CANSEE_ARMORED_COMPASS \
	driverCanSee = CanSeeEye + CanSeeEar + CanSeeCompass + CanSeePeripheral; \
	gunnerCanSee = CanSeeEye + CanSeeOptics + CanSeeEar + CanSeeCompass + CanSeePeripheral; \
	commanderCanSee = CanSeeEye + CanSeeOptics + CanSeeEar + CanSeeCompass + CanSeePeripheral;

#define DZE_MACRO_VEHICLE_CANSEE_ARMORED_ALL \
	driverCanSee = CanSeeAll; \
	gunnerCanSee = CanSeeAll; \
	commanderCanSee = CanSeeAll;

// Helicopters and planes also provide optics to the pilot.
#define DZE_MACRO_VEHICLE_CANSEE_AIR \
	driverCanSee = CanSeeEye + CanSeeOptics + CanSeeEar + CanSeePeripheral; \
	gunnerCanSee = CanSeeEye + CanSeeOptics + CanSeeEar + CanSeePeripheral; \
	commanderCanSee = CanSeeEye + CanSeeOptics + CanSeeEar + CanSeePeripheral;

#define DZE_MACRO_VEHICLE_CANSEE_AIR_COMPASS \
	driverCanSee = CanSeeEye + CanSeeOptics + CanSeeEar + CanSeeCompass + CanSeePeripheral; \
	gunnerCanSee = CanSeeEye + CanSeeOptics + CanSeeEar + CanSeeCompass + CanSeePeripheral; \
	commanderCanSee = CanSeeEye + CanSeeOptics + CanSeeEar + CanSeeCompass + CanSeePeripheral;

#define DZE_MACRO_VEHICLE_CANSEE_AIR_ALL DZE_MACRO_VEHICLE_CANSEE_ARMORED_ALL
