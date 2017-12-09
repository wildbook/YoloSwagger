using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerClubMembership> GetLolClubsV1ClubsMembership(LeagueClientSession session) =>
            session.SendRequestAsync<PlayerClubMembership>(
                              method: "GET",
                            endpoint: $"/lol-clubs/v1/clubs/membership",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
