using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> DeleteLolMatchmakingV1Search(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/lol-matchmaking/v1/search",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
