using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolQueueEligibilityEligibility[]> GetLolQueueEligibilityV3Custom(LeagueClientSession session, string _pickMode, int _teamSize) =>
            session.SendRequestAsync<LolQueueEligibilityEligibility[]>(
                              method: "GET",
                            endpoint: $"/lol-queue-eligibility/v3/custom",
                               query: new Dictionary<string, string>{{"teamSize", JsonConvert.SerializeObject(_teamSize)}, {"pickMode", JsonConvert.SerializeObject(_pickMode)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
