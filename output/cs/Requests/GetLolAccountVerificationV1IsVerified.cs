using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolAccountVerificationIsVerifiedResponse> GetLolAccountVerificationV1IsVerified(LeagueClientSession session) =>
            session.SendRequestAsync<LolAccountVerificationIsVerifiedResponse>(
                              method: "GET",
                            endpoint: $"/lol-account-verification/v1/is-verified",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
