using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolCollectionsCollectionsChestEligibility> GetLolCollectionsV1InventoriesChestEligibility(LeagueClientSession session) =>
            session.SendRequestAsync<LolCollectionsCollectionsChestEligibility>(
                              method: "GET",
                            endpoint: $"/lol-collections/v1/inventories/chest-eligibility",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
