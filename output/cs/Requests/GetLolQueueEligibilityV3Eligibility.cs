using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolQueueEligibilityEligibility[]> GetLolQueueEligibilityV3Eligibility(LeagueClientSession session, int[] _queueIds, ulong[] _summonerIds) =>
            session.SendRequestAsync<LolQueueEligibilityEligibility[]>(
                              method: "GET",
                            endpoint: $"/lol-queue-eligibility/v3/eligibility",
                               query: new Dictionary<string, string>{{"summonerIds", JsonConvert.SerializeObject(_summonerIds)}, {"queueIds", JsonConvert.SerializeObject(_queueIds)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
