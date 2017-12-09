using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampSelectChampSelectDisabledChampions> GetLolChampSelectV1DisabledChampions(LeagueClientSession session) =>
            session.SendRequestAsync<LolChampSelectChampSelectDisabledChampions>(
                              method: "GET",
                            endpoint: $"/lol-champ-select/v1/disabled-champions",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
