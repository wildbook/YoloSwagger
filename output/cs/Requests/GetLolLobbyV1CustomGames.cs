using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyCustomGame[]> GetLolLobbyV1CustomGames(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyLobbyCustomGame[]>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v1/custom-games",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
