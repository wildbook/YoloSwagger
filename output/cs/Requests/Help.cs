using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> Help(LeagueClientSession session, RemotingHelpFormat? _format = null, string _target = null) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/Help",
                               query: new Dictionary<string, string>{{"target", JsonConvert.SerializeObject(_target)}, {"format", JsonConvert.SerializeObject(_format)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
