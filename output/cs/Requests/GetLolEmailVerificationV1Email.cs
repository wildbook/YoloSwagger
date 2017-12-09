using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolEmailVerificationEmailVerificationSession> GetLolEmailVerificationV1Email(LeagueClientSession session) =>
            session.SendRequestAsync<LolEmailVerificationEmailVerificationSession>(
                              method: "GET",
                            endpoint: $"/lol-email-verification/v1/email",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
