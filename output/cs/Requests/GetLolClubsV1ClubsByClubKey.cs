using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerClub> GetLolClubsV1ClubsByClubKey(LeagueClientSession session, string _clubKey) =>
            session.SendRequestAsync<PlayerClub>(
                              method: "GET",
                            endpoint: $"/lol-clubs/v1/clubs/{_clubKey}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
