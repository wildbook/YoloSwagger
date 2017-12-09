using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<EntitlementsToken> GetEntitlementsV1Token(LeagueClientSession session) =>
            session.SendRequestAsync<EntitlementsToken>(
                              method: "GET",
                            endpoint: $"/entitlements/v1/token",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
