using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolHonorV2VoteCompletion> GetLolHonorV2V1VoteCompletion(LeagueClientSession session) =>
            session.SendRequestAsync<LolHonorV2VoteCompletion>(
                              method: "GET",
                            endpoint: $"/lol-honor-v2/v1/vote-completion",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
