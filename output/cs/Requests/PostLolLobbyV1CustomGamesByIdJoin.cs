using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLobbyV1CustomGamesByIdJoin(LeagueClientSession session, ulong _id, LolLobbyLobbyCustomJoinParameters _parameters) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-lobby/v1/custom-games/{_id}/join",
                               query: null,
                             headers: null,
                                body: _parameters,
                       serializeBody: true);
    }
}
