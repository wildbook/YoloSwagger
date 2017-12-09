using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolMapsMaps> GetLolMapsV1MapById(LeagueClientSession session, long _id) =>
            session.SendRequestAsync<LolMapsMaps>(
                              method: "GET",
                            endpoint: $"/lol-maps/v1/map/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
