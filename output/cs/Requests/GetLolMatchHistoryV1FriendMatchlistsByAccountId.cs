using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolMatchHistoryMatchHistoryList> GetLolMatchHistoryV1FriendMatchlistsByAccountId(LeagueClientSession session, ulong _accountId) =>
            session.SendRequestAsync<LolMatchHistoryMatchHistoryList>(
                              method: "GET",
                            endpoint: $"/lol-match-history/v1/friend-matchlists/{_accountId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
