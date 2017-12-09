using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPerksPerkUIStyle[]> GetLolPerksV1Styles(LeagueClientSession session) =>
            session.SendRequestAsync<LolPerksPerkUIStyle[]>(
                              method: "GET",
                            endpoint: $"/lol-perks/v1/styles",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}