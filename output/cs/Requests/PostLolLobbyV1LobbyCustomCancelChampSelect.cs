using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLobbyV1LobbyCustomCancelChampSelect(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-lobby/v1/lobby/custom/cancel-champ-select",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
