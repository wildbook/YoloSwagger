using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLoadoutsLoadout> PostLolLoadoutsV1Loadout(LeagueClientSession session, LolLoadoutsLoadout _loadout) =>
            session.SendRequestAsync<LolLoadoutsLoadout>(
                              method: "POST",
                            endpoint: $"/lol-loadouts/v1/loadout",
                               query: null,
                             headers: null,
                                body: _loadout,
                       serializeBody: true);
    }
}
