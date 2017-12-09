using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolPreEndOfGameV1RegistrationBySequenceEventNameByPriority(LeagueClientSession session, int _priority, string _sequenceEventName) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-pre-end-of-game/v1/registration/{_sequenceEventName}/{_priority}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
