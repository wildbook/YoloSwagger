using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLoginV1ChangeSummonerName(LeagueClientSession session, string _name) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-login/v1/change-summoner-name",
                               query: null,
                             headers: null,
                                body: _name,
                       serializeBody: true);
    }
}
