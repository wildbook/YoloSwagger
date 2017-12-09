using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLobbyV1TournamentsByIdJoin(LeagueClientSession session, string _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-lobby/v1/tournaments/{_id}/join",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
