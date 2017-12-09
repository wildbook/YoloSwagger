using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostRiotclientAffinity(LeagueClientSession session, string _newAffinity) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/riotclient/affinity",
                               query: new Dictionary<string, string>{{"newAffinity", JsonConvert.SerializeObject(_newAffinity)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
