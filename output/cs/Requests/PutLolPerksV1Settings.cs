using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PutLolPerksV1Settings(LeagueClientSession session, LolPerksUISettings _showLongDescriptions) =>
            session.SendRequestAsync<dynamic>(
                              method: "PUT",
                            endpoint: $"/lol-perks/v1/settings",
                               query: null,
                             headers: null,
                                body: _showLongDescriptions,
                       serializeBody: true);
    }
}
