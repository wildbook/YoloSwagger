using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderChampSelectTradeContract> GetLolLobbyTeamBuilderChampSelectV1SessionTradesById(LeagueClientSession session, long _id) =>
            session.SendRequestAsync<LolLobbyTeamBuilderChampSelectTradeContract>(
                              method: "GET",
                            endpoint: $"/lol-lobby-team-builder/champ-select/v1/session/trades/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
