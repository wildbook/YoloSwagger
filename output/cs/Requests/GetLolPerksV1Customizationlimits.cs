using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPerksCustomizationLimits> GetLolPerksV1Customizationlimits(LeagueClientSession session) =>
            session.SendRequestAsync<LolPerksCustomizationLimits>(
                              method: "GET",
                            endpoint: $"/lol-perks/v1/customizationlimits",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
