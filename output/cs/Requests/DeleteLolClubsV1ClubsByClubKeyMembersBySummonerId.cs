using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<ClubMemberLists> DeleteLolClubsV1ClubsByClubKeyMembersBySummonerId(LeagueClientSession session, string _clubKey, ulong _summonerId) =>
            session.SendRequestAsync<ClubMemberLists>(
                              method: "DELETE",
                            endpoint: $"/lol-clubs/v1/clubs/{_clubKey}/members/{_summonerId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
