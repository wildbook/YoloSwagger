using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerMissionDTO> GetLolMissionsV1MissionsByMissionId(LeagueClientSession session, string _missionId) =>
            session.SendRequestAsync<PlayerMissionDTO>(
                              method: "GET",
                            endpoint: $"/lol-missions/v1/missions/{_missionId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
