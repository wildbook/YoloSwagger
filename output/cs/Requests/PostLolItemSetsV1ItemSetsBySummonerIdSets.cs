using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolItemSetsV1ItemSetsBySummonerIdSets(LeagueClientSession session, LolItemSetsItemSet _itemSet, ulong _summonerId) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-item-sets/v1/item-sets/{_summonerId}/sets",
                               query: null,
                             headers: null,
                                body: _itemSet,
                       serializeBody: true);
    }
}
