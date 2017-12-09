using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostRiotclientAddorupdatemetric(LeagueClientSession session, string _group, string _name, string _object, ulong _value) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/riotclient/addorupdatemetric",
                               query: new Dictionary<string, string>{{"group", JsonConvert.SerializeObject(_group)}, {"object", JsonConvert.SerializeObject(_object)}, {"name", JsonConvert.SerializeObject(_name)}, {"value", JsonConvert.SerializeObject(_value)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
