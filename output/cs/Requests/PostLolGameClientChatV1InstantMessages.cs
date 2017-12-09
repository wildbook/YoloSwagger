using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolGameClientChatV1InstantMessages(LeagueClientSession session, string _message, string _summonerName) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-game-client-chat/v1/instant-messages",
                               query: new Dictionary<string, string>{{"summonerName", JsonConvert.SerializeObject(_summonerName)}, {"message", JsonConvert.SerializeObject(_message)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
