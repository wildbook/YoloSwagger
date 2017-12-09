using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyPlayerDto> GetLolLobbyV1PartiesPlayer(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyPlayerDto>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v1/parties/player",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
