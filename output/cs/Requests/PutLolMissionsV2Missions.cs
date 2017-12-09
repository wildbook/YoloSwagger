using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutLolMissionsV2Missions(LeagueClientSession session, MissionIdsDTO _missionIds) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/lol-missions/v2/missions",
                               query: null,
                             headers: null,
                                body: _missionIds,
                       serializeBody: true);
    }
}
