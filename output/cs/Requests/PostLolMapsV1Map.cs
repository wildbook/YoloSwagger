using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolMapsV1Map(LeagueClientSession session, LolMapsMaps _map) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-maps/v1/map",
                               query: null,
                             headers: null,
                                body: _map,
                       serializeBody: true);
    }
}
