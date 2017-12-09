using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolLobbyV2PartiesOverridesEnabledForTeamBuilderQueues(LeagueClientSession session, bool _enabledForTeambuilderQueues) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-lobby/v2/parties/overrides/EnabledForTeamBuilderQueues",
                               query: new Dictionary<string, string>{{"enabledForTeambuilderQueues", JsonConvert.SerializeObject(_enabledForTeambuilderQueues)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
