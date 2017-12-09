using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampSelectTeamBoost> GetLolChampSelectV1TeamBoost(LeagueClientSession session) =>
            session.SendRequestAsync<LolChampSelectTeamBoost>(
                              method: "GET",
                            endpoint: $"/lol-champ-select/v1/team-boost",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
