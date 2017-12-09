using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RsoAuthRegionStatus> GetRsoAuthV1StatusByPlatformId(LeagueClientSession session, string _platformId) =>
            session.SendRequestAsync<RsoAuthRegionStatus>(
                              method: "GET",
                            endpoint: $"/rso-auth/v1/status/{_platformId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
