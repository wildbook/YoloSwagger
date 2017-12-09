using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolGameClientChatV1PartyMessages(LeagueClientSession session, string _message) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-game-client-chat/v1/party-messages",
                               query: new Dictionary<string, string>{{"message", JsonConvert.SerializeObject(_message)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
