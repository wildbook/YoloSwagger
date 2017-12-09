using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PutLolChatV1SettingsByKey(LeagueClientSession session, string _key, dynamic _value, bool? _doAsync = null) =>
            session.SendRequestAsync<dynamic>(
                              method: "PUT",
                            endpoint: $"/lol-chat/v1/settings/{_key}",
                               query: new Dictionary<string, string>{{"doAsync", JsonConvert.SerializeObject(_doAsync)}, },
                             headers: null,
                                body: _value,
                       serializeBody: true);
    }
}
