using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderTeamBoost> GetLolLobbyTeamBuilderChampSelectV1TeamBoost(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyTeamBuilderTeamBoost>(
                              method: "GET",
                            endpoint: $"/lol-lobby-team-builder/champ-select/v1/team-boost",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
