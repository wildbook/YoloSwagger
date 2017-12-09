using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderChampSelectTradeContract[]> GetLolLobbyTeamBuilderChampSelectV1SessionTrades(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyTeamBuilderChampSelectTradeContract[]>(
                              method: "GET",
                            endpoint: $"/lol-lobby-team-builder/champ-select/v1/session/trades",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
