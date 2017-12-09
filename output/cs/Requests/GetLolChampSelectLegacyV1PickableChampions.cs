using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampSelectLegacyChampSelectPickableChampions> GetLolChampSelectLegacyV1PickableChampions(LeagueClientSession session) =>
            session.SendRequestAsync<LolChampSelectLegacyChampSelectPickableChampions>(
                              method: "GET",
                            endpoint: $"/lol-champ-select-legacy/v1/pickable-champions",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
