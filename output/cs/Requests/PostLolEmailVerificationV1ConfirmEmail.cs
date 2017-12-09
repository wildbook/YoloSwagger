using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolEmailVerificationV1ConfirmEmail(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-email-verification/v1/confirm-email",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}