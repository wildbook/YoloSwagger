using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<ClubMemberLists> PostLolClubsV1ClubsByClubKeyNominationsBySummonerId(LeagueClientSession session, string _clubKey, ulong _summonerId) =>
            session.SendRequestAsync<ClubMemberLists>(
                              method: "POST",
                            endpoint: $"/lol-clubs/v1/clubs/{_clubKey}/nominations/{_summonerId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
