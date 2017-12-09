using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLobbyTeamBuilderChampSelectV1SessionTradesByIdCancel(LeagueClientSession session, int _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-lobby-team-builder/champ-select/v1/session/trades/{_id}/cancel",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
