using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampSelectLegacyChampSelectTimer> GetLolChampSelectLegacyV1SessionTimer(LeagueClientSession session) =>
            session.SendRequestAsync<LolChampSelectLegacyChampSelectTimer>(
                              method: "GET",
                            endpoint: $"/lol-champ-select-legacy/v1/session/timer",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
