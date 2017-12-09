using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<bool> GetLolSummonerV1CheckNameAvailabilityByName(LeagueClientSession session, string _name) =>
            session.SendRequestAsync<bool>(
                              method: "GET",
                            endpoint: $"/lol-summoner/v1/check-name-availability/{_name}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
