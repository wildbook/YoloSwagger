using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyCustomGame> GetLolLobbyV1CustomGamesById(LeagueClientSession session, int _id) =>
            session.SendRequestAsync<LolLobbyLobbyCustomGame>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v1/custom-games/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
