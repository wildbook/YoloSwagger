using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<long[]> GetLolClashV1TournamentIds(LeagueClientSession session) =>
            session.SendRequestAsync<long[]>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/tournamentIds",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
