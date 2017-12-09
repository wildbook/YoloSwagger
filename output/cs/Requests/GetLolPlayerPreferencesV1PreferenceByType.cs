using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetLolPlayerPreferencesV1PreferenceByType(LeagueClientSession session, string _type, string _hash = null) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/lol-player-preferences/v1/preference/{_type}",
                               query: new Dictionary<string, string>{{"hash", JsonConvert.SerializeObject(_hash)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
