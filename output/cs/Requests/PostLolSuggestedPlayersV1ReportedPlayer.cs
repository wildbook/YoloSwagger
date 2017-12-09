using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolSuggestedPlayersV1ReportedPlayer(LeagueClientSession session, LolSuggestedPlayersSuggestedPlayersReportedPlayer _resource) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-suggested-players/v1/reported-player",
                               query: null,
                             headers: null,
                                body: _resource,
                       serializeBody: true);
    }
}
