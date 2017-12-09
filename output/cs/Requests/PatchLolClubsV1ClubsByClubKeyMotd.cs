using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerClub> PatchLolClubsV1ClubsByClubKeyMotd(LeagueClientSession session, string _clubKey, ClubMOTD _motd) =>
            session.SendRequestAsync<PlayerClub>(
                              method: "PATCH",
                            endpoint: $"/lol-clubs/v1/clubs/{_clubKey}/motd",
                               query: null,
                             headers: null,
                                body: _motd,
                       serializeBody: true);
    }
}
