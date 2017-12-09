using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetLolAcsV1GamesByGameId(LeagueClientSession session, ulong _gameId) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/lol-acs/v1/games/{_gameId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
