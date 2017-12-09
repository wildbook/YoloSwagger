using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPerksPerkPageResource> GetLolPerksV1Currentpage(LeagueClientSession session) =>
            session.SendRequestAsync<LolPerksPerkPageResource>(
                              method: "GET",
                            endpoint: $"/lol-perks/v1/currentpage",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
