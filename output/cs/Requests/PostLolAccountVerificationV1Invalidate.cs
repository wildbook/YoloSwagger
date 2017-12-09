using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolAccountVerificationInvalidateResponse> PostLolAccountVerificationV1Invalidate(LeagueClientSession session) =>
            session.SendRequestAsync<LolAccountVerificationInvalidateResponse>(
                              method: "POST",
                            endpoint: $"/lol-account-verification/v1/invalidate",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
