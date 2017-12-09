using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolGameflowV1SpectateLaunch(LeagueClientSession session, string _summonerName = null) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-gameflow/v1/spectate/launch",
                               query: null,
                             headers: null,
                                body: _summonerName,
                       serializeBody: true);
    }
}
