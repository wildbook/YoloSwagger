using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PatchLolLobbyTeamBuilderChampSelectV1SessionActionsById(LeagueClientSession session, LolLobbyTeamBuilderChampSelectAction _data, int _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "PATCH",
                            endpoint: $"/lol-lobby-team-builder/champ-select/v1/session/actions/{_id}",
                               query: null,
                             headers: null,
                                body: _data,
                       serializeBody: true);
    }
}
