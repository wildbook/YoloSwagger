using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolGameClientChatV1IgnoredSummoners(LeagueClientSession session, string _summonerName) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-game-client-chat/v1/ignored-summoners",
                               query: new Dictionary<string, string>{{"summonerName", JsonConvert.SerializeObject(_summonerName)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
