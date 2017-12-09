using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<int[]> GetLolPerksV1PerksDisabled(LeagueClientSession session) =>
            session.SendRequestAsync<int[]>(
                              method: "GET",
                            endpoint: $"/lol-perks/v1/perks/disabled",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
