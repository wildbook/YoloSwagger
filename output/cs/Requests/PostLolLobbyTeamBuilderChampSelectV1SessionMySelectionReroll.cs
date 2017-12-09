using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLobbyTeamBuilderChampSelectV1SessionMySelectionReroll(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-lobby-team-builder/champ-select/v1/session/my-selection/reroll",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
