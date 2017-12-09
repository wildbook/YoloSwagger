using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolLobbyV2PartiesOverridesEnabled(LeagueClientSession session, bool _enabled) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-lobby/v2/parties/overrides/Enabled",
                               query: new Dictionary<string, string>{{"enabled", JsonConvert.SerializeObject(_enabled)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
