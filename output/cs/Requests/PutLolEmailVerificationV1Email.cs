using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PutLolEmailVerificationV1Email(LeagueClientSession session, LolEmailVerificationEmailUpdate _EmailUpdate) =>
            session.SendRequestAsync<dynamic>(
                              method: "PUT",
                            endpoint: $"/lol-email-verification/v1/email",
                               query: null,
                             headers: null,
                                body: _EmailUpdate,
                       serializeBody: true);
    }
}
