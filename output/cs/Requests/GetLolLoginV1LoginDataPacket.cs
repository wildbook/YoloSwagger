using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetLolLoginV1LoginDataPacket(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/lol-login/v1/login-data-packet",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
