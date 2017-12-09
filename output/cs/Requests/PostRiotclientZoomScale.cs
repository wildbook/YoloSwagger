using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostRiotclientZoomScale(LeagueClientSession session, double _newZoomScale) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/riotclient/zoom-scale",
                               query: new Dictionary<string, string>{{"newZoomScale", JsonConvert.SerializeObject(_newZoomScale)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
