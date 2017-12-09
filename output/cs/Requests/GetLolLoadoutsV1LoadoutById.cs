using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLoadoutsLoadout> GetLolLoadoutsV1LoadoutById(LeagueClientSession session, uint _id) =>
            session.SendRequestAsync<LolLoadoutsLoadout>(
                              method: "GET",
                            endpoint: $"/lol-loadouts/v1/loadout/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
