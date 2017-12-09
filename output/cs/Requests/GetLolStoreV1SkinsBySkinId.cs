using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolStoreCatalogItem> GetLolStoreV1SkinsBySkinId(LeagueClientSession session, int _skinId) =>
            session.SendRequestAsync<LolStoreCatalogItem>(
                              method: "GET",
                            endpoint: $"/lol-store/v1/skins/{_skinId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
