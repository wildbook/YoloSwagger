using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerMissionDTO[]> GetLolMissionsV1Missions(LeagueClientSession session) =>
            session.SendRequestAsync<PlayerMissionDTO[]>(
                              method: "GET",
                            endpoint: $"/lol-missions/v1/missions",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
