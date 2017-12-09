using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPerksPerkUIPerk[]> GetLolPerksV1Perks(LeagueClientSession session) =>
            session.SendRequestAsync<LolPerksPerkUIPerk[]>(
                              method: "GET",
                            endpoint: $"/lol-perks/v1/perks",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
