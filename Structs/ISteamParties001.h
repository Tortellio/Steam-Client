class ISteamParties001
{
public:
    virtual unknown_ret GetNumActiveBeacons() = 0;
    virtual unknown_ret GetBeaconByIndex(unsigned int) = 0;
    virtual unknown_ret GetBeaconDetails(unsigned long long, CSteamID*, SteamPartyBeaconLocation_v001_t*, char*, int) = 0;
    virtual unknown_ret JoinParty(unsigned long long) = 0;
    virtual unknown_ret GetNumAvailableBeaconLocations(unsigned int*) = 0;
    virtual unknown_ret GetAvailableBeaconLocations(SteamPartyBeaconLocation_v001_t*, unsigned int) = 0;
    virtual unknown_ret CreateBeacon(unsigned int, SteamPartyBeaconLocation_v001_t*, char const*, char const*) = 0;
    virtual unknown_ret OnReservationCompleted(unsigned long long, CSteamID) = 0;
    virtual unknown_ret CancelReservation(unsigned long long, CSteamID) = 0;
    virtual unknown_ret ChangeNumOpenSlots(unsigned long long, unsigned int) = 0;
    virtual unknown_ret DestroyBeacon(unsigned long long) = 0;
    virtual unknown_ret GetBeaconLocationData(SteamPartyBeaconLocation_v001_t, ESteamPartyBeaconLocationData, char*, int) = 0;
};
