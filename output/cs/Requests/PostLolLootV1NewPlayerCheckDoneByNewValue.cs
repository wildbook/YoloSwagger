using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string> PostLolLootV1NewPlayerCheckDoneByNewValue(LeagueClientSession session, bool _newValue) =>
            session.SendRequestAsync<string>(
                              method: "POST",
                            endpoint: $"/lol-loot/v1/new-player-check-done/{_newValue}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
