using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolSimpleDialogMessagesV1Messages(LeagueClientSession session, LolSimpleDialogMessagesLocalMessageRequest _messageRequest) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-simple-dialog-messages/v1/messages",
                               query: null,
                             headers: null,
                                body: _messageRequest,
                       serializeBody: true);
    }
}
