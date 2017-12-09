using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> DeleteLolSimpleDialogMessagesV1MessagesByMessageId(LeagueClientSession session, long _messageId) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/lol-simple-dialog-messages/v1/messages/{_messageId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
