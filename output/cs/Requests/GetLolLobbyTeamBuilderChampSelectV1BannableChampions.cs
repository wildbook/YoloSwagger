using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderChampSelectBannableChampions> GetLolLobbyTeamBuilderChampSelectV1BannableChampions(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyTeamBuilderChampSelectBannableChampions>(
                              method: "GET",
                            endpoint: $"/lol-lobby-team-builder/champ-select/v1/bannable-champions",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
