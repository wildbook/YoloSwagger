using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampSelectChampSelectTimer> GetLolChampSelectV1SessionTimer(LeagueClientSession session) =>
            session.SendRequestAsync<LolChampSelectChampSelectTimer>(
                              method: "GET",
                            endpoint: $"/lol-champ-select/v1/session/timer",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
