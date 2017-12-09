using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampSelectLegacyChampSelectSession> GetLolChampSelectLegacyV1Session(LeagueClientSession session) =>
            session.SendRequestAsync<LolChampSelectLegacyChampSelectSession>(
                              method: "GET",
                            endpoint: $"/lol-champ-select-legacy/v1/session",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
