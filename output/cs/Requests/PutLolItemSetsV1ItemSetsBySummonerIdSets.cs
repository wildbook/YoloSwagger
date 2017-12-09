using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutLolItemSetsV1ItemSetsBySummonerIdSets(LeagueClientSession session, LolItemSetsItemSets _itemSets, ulong _summonerId) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/lol-item-sets/v1/item-sets/{_summonerId}/sets",
                               query: null,
                             headers: null,
                                body: _itemSets,
                       serializeBody: true);
    }
}
