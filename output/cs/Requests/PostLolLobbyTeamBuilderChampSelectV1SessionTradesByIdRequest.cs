using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderChampSelectTradeContract> PostLolLobbyTeamBuilderChampSelectV1SessionTradesByIdRequest(LeagueClientSession session, int _id) =>
            session.SendRequestAsync<LolLobbyTeamBuilderChampSelectTradeContract>(
                              method: "POST",
                            endpoint: $"/lol-lobby-team-builder/champ-select/v1/session/trades/{_id}/request",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
