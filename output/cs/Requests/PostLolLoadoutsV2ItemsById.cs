using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLoadoutsV2ItemsById(LeagueClientSession session, uint _id, Dictionary<string, dynamic> _items) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-loadouts/v2/items/{_id}",
                               query: null,
                             headers: null,
                                body: _items,
                       serializeBody: true);
    }
}
