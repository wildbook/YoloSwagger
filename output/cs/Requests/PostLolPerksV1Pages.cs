using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPerksPerkPageResource> PostLolPerksV1Pages(LeagueClientSession session, LolPerksPerkPageResource _page) =>
            session.SendRequestAsync<LolPerksPerkPageResource>(
                              method: "POST",
                            endpoint: $"/lol-perks/v1/pages",
                               query: null,
                             headers: null,
                                body: _page,
                       serializeBody: true);
    }
}
