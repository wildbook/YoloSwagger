using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task GetLolLootV1CurrencyConfiguration(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "GET",
                            endpoint: $"/lol-loot/v1/currency-configuration",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
