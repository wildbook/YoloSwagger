using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLoginLcdsResponse> PostLolLoginV1SessionInvoke(LeagueClientSession session, dynamic[] _args, string _destination, string _method) =>
            session.SendRequestAsync<LolLoginLcdsResponse>(
                              method: "POST",
                            endpoint: $"/lol-login/v1/session/invoke",
                               query: new Dictionary<string, string>{{"destination", JsonConvert.SerializeObject(_destination)}, {"method", JsonConvert.SerializeObject(_method)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
