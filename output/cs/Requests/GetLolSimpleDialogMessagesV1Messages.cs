using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolSimpleDialogMessagesMessage[]> GetLolSimpleDialogMessagesV1Messages(LeagueClientSession session) =>
            session.SendRequestAsync<LolSimpleDialogMessagesMessage[]>(
                              method: "GET",
                            endpoint: $"/lol-simple-dialog-messages/v1/messages",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
