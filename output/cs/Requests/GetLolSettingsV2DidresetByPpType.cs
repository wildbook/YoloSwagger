using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<bool> GetLolSettingsV2DidresetByPpType(LeagueClientSession session, string _ppType) =>
            session.SendRequestAsync<bool>(
                              method: "GET",
                            endpoint: $"/lol-settings/v2/didreset/{_ppType}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
