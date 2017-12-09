using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolPftV2Survey(LeagueClientSession session, LolPftPFTSurvey _survey) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-pft/v2/survey",
                               query: null,
                             headers: null,
                                body: _survey,
                       serializeBody: true);
    }
}
