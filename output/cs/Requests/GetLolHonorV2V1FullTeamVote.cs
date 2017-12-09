using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolHonorV2FullTeamVote> GetLolHonorV2V1FullTeamVote(LeagueClientSession session) =>
            session.SendRequestAsync<LolHonorV2FullTeamVote>(
                              method: "GET",
                            endpoint: $"/lol-honor-v2/v1/full-team-vote",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
