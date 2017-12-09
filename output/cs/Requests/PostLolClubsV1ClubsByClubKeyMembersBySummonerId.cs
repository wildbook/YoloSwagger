using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerClub> PostLolClubsV1ClubsByClubKeyMembersBySummonerId(LeagueClientSession session, string _clubKey, ulong _summonerId) =>
            session.SendRequestAsync<PlayerClub>(
                              method: "POST",
                            endpoint: $"/lol-clubs/v1/clubs/{_clubKey}/members/{_summonerId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
