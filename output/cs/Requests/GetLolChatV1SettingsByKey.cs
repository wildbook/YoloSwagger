using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetLolChatV1SettingsByKey(LeagueClientSession session, string _key) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/lol-chat/v1/settings/{_key}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
