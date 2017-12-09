using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> DeleteLolCollectionsV1InventoriesBySummonerIdMasteryBookPagesByPageId(LeagueClientSession session, uint _pageId, ulong _summonerId) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/lol-collections/v1/inventories/{_summonerId}/masteryBook/pages/{_pageId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
