using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<ClubPreferences> PatchLolClubsV1ClubsMembershipPreferences(LeagueClientSession session, ClubPreferences _preferences) =>
            session.SendRequestAsync<ClubPreferences>(
                              method: "PATCH",
                            endpoint: $"/lol-clubs/v1/clubs/membership/preferences",
                               query: null,
                             headers: null,
                                body: _preferences,
                       serializeBody: true);
    }
}
