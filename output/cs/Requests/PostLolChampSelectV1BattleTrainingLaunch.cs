using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolChampSelectV1BattleTrainingLaunch(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-champ-select/v1/battle-training/launch",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
