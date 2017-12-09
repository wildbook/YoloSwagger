using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPftPFTSurvey> GetLolPftV2Survey(LeagueClientSession session) =>
            session.SendRequestAsync<LolPftPFTSurvey>(
                              method: "GET",
                            endpoint: $"/lol-pft/v2/survey",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
