using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolMapsMaps[]> GetLolMapsV2Maps(LeagueClientSession session) =>
            session.SendRequestAsync<LolMapsMaps[]>(
                              method: "GET",
                            endpoint: $"/lol-maps/v2/maps",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
