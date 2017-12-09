using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<SummonerOrTeamAvailabilty> PostLolSpectatorV1BuddySpectate(LeagueClientSession session, string[] _summonerOrTeamNames) =>
            session.SendRequestAsync<SummonerOrTeamAvailabilty>(
                              method: "POST",
                            endpoint: $"/lol-spectator/v1/buddy/spectate",
                               query: null,
                             headers: null,
                                body: _summonerOrTeamNames,
                       serializeBody: true);
    }
}
