using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolMapsMaps> GetLolMapsV2MapByIdByGameModeByGameMutator(LeagueClientSession session, string _gameMode, string _gameMutator, long _id) =>
            session.SendRequestAsync<LolMapsMaps>(
                              method: "GET",
                            endpoint: $"/lol-maps/v2/map/{_id}/{_gameMode}/{_gameMutator}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
