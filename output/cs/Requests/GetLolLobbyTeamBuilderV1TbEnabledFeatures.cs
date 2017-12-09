using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource> GetLolLobbyTeamBuilderV1TbEnabledFeatures(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource>(
                              method: "GET",
                            endpoint: $"/lol-lobby-team-builder/v1/tb-enabled-features",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
