using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolMapsMaps[]> GetLolMapsV1Maps(LeagueClientSession session) =>
            session.SendRequestAsync<LolMapsMaps[]>(
                              method: "GET",
                            endpoint: $"/lol-maps/v1/maps",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
