using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolEndOfGameEndOfGamePlayerComplaintV2> PostLolEndOfGameV2PlayerComplaints(LeagueClientSession session, LolEndOfGameEndOfGamePlayerComplaintV2 _complaint) =>
            session.SendRequestAsync<LolEndOfGameEndOfGamePlayerComplaintV2>(
                              method: "POST",
                            endpoint: $"/lol-end-of-game/v2/player-complaints",
                               query: null,
                             headers: null,
                                body: _complaint,
                       serializeBody: true);
    }
}
