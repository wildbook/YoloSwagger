using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task DeleteLolPreEndOfGameV1RegistrationBySequenceEventName(LeagueClientSession session, string _sequenceEventName) =>
            session.SendRequestAsync(
                              method: "DELETE",
                            endpoint: $"/lol-pre-end-of-game/v1/registration/{_sequenceEventName}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
