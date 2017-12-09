using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<TeamBoost> GetLolTeamBoostsV1TeamBoost(LeagueClientSession session) =>
            session.SendRequestAsync<TeamBoost>(
                              method: "GET",
                            endpoint: $"/lol-team-boosts/v1/team-boost",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
