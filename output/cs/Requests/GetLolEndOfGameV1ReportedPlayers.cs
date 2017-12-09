using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<ulong[]> GetLolEndOfGameV1ReportedPlayers(LeagueClientSession session) =>
            session.SendRequestAsync<ulong[]>(
                              method: "GET",
                            endpoint: $"/lol-end-of-game/v1/reported-players",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
