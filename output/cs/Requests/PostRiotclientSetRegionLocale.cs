using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostRiotclientSetRegionLocale(LeagueClientSession session, string _locale, string _region) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/riotclient/set_region_locale",
                               query: new Dictionary<string, string>{{"region", JsonConvert.SerializeObject(_region)}, {"locale", JsonConvert.SerializeObject(_locale)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
