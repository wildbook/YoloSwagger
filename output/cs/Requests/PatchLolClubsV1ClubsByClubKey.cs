using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerClub> PatchLolClubsV1ClubsByClubKey(LeagueClientSession session, string _clubKey, ClubTag _tag) =>
            session.SendRequestAsync<PlayerClub>(
                              method: "PATCH",
                            endpoint: $"/lol-clubs/v1/clubs/{_clubKey}",
                               query: null,
                             headers: null,
                                body: _tag,
                       serializeBody: true);
    }
}
