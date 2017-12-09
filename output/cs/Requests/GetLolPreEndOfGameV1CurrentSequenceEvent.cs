using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPreEndOfGameSequenceEvent> GetLolPreEndOfGameV1CurrentSequenceEvent(LeagueClientSession session) =>
            session.SendRequestAsync<LolPreEndOfGameSequenceEvent>(
                              method: "GET",
                            endpoint: $"/lol-pre-end-of-game/v1/currentSequenceEvent",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
