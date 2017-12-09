using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<ClubPreferences> GetLolClubsV1ClubsMembershipPreferences(LeagueClientSession session) =>
            session.SendRequestAsync<ClubPreferences>(
                              method: "GET",
                            endpoint: $"/lol-clubs/v1/clubs/membership/preferences",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
