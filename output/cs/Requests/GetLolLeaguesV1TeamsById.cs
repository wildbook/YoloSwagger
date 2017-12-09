using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLeaguesLeagueTeam> GetLolLeaguesV1TeamsById(LeagueClientSession session, string _id) =>
            session.SendRequestAsync<LolLeaguesLeagueTeam>(
                              method: "GET",
                            endpoint: $"/lol-leagues/v1/teams/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
