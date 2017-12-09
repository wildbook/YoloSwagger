using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolQueueEligibilityEligibility[]> PostLolQueueEligibilityV1Eligibility(LeagueClientSession session, LolQueueEligibilityEligibilityQueryParams _eligibilityQueryParam) =>
            session.SendRequestAsync<LolQueueEligibilityEligibility[]>(
                              method: "POST",
                            endpoint: $"/lol-queue-eligibility/v1/eligibility",
                               query: null,
                             headers: null,
                                body: _eligibilityQueryParam,
                       serializeBody: true);
    }
}
