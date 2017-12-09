using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PutLolPerksV1Currentpage(LeagueClientSession session, int _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "PUT",
                            endpoint: $"/lol-perks/v1/currentpage",
                               query: null,
                             headers: null,
                                body: _id,
                       serializeBody: true);
    }
}
