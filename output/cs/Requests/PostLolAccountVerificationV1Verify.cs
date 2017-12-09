using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolAccountVerificationVerifyResponse> PostLolAccountVerificationV1Verify(LeagueClientSession session, LolAccountVerificationVerifyRequest _VerifyRequest) =>
            session.SendRequestAsync<LolAccountVerificationVerifyResponse>(
                              method: "POST",
                            endpoint: $"/lol-account-verification/v1/verify",
                               query: null,
                             headers: null,
                                body: _VerifyRequest,
                       serializeBody: true);
    }
}
