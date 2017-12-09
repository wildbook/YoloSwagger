using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<bool> GetLolChampSelectLegacyV1ImplementationActive(LeagueClientSession session) =>
            session.SendRequestAsync<bool>(
                              method: "GET",
                            endpoint: $"/lol-champ-select-legacy/v1/implementation-active",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
