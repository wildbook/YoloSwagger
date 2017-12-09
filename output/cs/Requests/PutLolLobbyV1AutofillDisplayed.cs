using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<bool> PutLolLobbyV1AutofillDisplayed(LeagueClientSession session) =>
            session.SendRequestAsync<bool>(
                              method: "PUT",
                            endpoint: $"/lol-lobby/v1/autofill-displayed",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
