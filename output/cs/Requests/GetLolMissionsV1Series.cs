using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<SeriesDTO[]> GetLolMissionsV1Series(LeagueClientSession session) =>
            session.SendRequestAsync<SeriesDTO[]>(
                              method: "GET",
                            endpoint: $"/lol-missions/v1/series",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
