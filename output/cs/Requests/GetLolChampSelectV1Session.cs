using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampSelectChampSelectSession> GetLolChampSelectV1Session(LeagueClientSession session) =>
            session.SendRequestAsync<LolChampSelectChampSelectSession>(
                              method: "GET",
                            endpoint: $"/lol-champ-select/v1/session",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
