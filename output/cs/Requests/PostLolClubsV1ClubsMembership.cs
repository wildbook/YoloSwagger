using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerClub> PostLolClubsV1ClubsMembership(LeagueClientSession session, ClubName _name) =>
            session.SendRequestAsync<PlayerClub>(
                              method: "POST",
                            endpoint: $"/lol-clubs/v1/clubs/membership",
                               query: null,
                             headers: null,
                                body: _name,
                       serializeBody: true);
    }
}
