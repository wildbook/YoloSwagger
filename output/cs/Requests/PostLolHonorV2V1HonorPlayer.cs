using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string> PostLolHonorV2V1HonorPlayer(LeagueClientSession session, LolHonorV2ApiHonorPlayerServerRequest _honorPlayerRequest) =>
            session.SendRequestAsync<string>(
                              method: "POST",
                            endpoint: $"/lol-honor-v2/v1/honor-player",
                               query: null,
                             headers: null,
                                body: _honorPlayerRequest,
                       serializeBody: true);
    }
}
