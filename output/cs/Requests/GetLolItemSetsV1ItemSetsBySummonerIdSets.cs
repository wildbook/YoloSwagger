using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolItemSetsItemSets> GetLolItemSetsV1ItemSetsBySummonerIdSets(LeagueClientSession session, ulong _summonerId) =>
            session.SendRequestAsync<LolItemSetsItemSets>(
                              method: "GET",
                            endpoint: $"/lol-item-sets/v1/item-sets/{_summonerId}/sets",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
