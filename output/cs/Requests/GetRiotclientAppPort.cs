using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<ushort> GetRiotclientAppPort(LeagueClientSession session) =>
            session.SendRequestAsync<ushort>(
                              method: "GET",
                            endpoint: $"/riotclient/app-port",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
