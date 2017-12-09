using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolAccountVerificationSendTokenResponse> PostLolAccountVerificationV1SendToken(LeagueClientSession session, LolAccountVerificationSendTokenRequest _SendTokenRequest) =>
            session.SendRequestAsync<LolAccountVerificationSendTokenResponse>(
                              method: "POST",
                            endpoint: $"/lol-account-verification/v1/send-token",
                               query: null,
                             headers: null,
                                body: _SendTokenRequest,
                       serializeBody: true);
    }
}
