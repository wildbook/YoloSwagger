using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampSelectChampSelectPickableChampions> GetLolChampSelectV1PickableChampions(LeagueClientSession session) =>
            session.SendRequestAsync<LolChampSelectChampSelectPickableChampions>(
                              method: "GET",
                            endpoint: $"/lol-champ-select/v1/pickable-champions",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}