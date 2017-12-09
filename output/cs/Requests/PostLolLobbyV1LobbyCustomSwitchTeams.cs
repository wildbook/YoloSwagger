using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLobbyV1LobbyCustomSwitchTeams(LeagueClientSession session, string _team = null) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-lobby/v1/lobby/custom/switch-teams",
                               query: new Dictionary<string, string>{{"team", JsonConvert.SerializeObject(_team)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
