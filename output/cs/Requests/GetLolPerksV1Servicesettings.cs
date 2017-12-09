using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPerksServiceSettings> GetLolPerksV1Servicesettings(LeagueClientSession session) =>
            session.SendRequestAsync<LolPerksServiceSettings>(
                              method: "GET",
                            endpoint: $"/lol-perks/v1/servicesettings",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
