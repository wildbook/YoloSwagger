using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerClub[]> GetLolClubsV1Clubs(LeagueClientSession session) =>
            session.SendRequestAsync<PlayerClub[]>(
                              method: "GET",
                            endpoint: $"/lol-clubs/v1/clubs",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
