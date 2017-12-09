using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashRoster[]> GetLolClashV1Invitations(LeagueClientSession session) =>
            session.SendRequestAsync<LolClashRoster[]>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/invitations",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
