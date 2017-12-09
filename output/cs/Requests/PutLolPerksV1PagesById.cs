using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PutLolPerksV1PagesById(LeagueClientSession session, int _id, LolPerksPerkPageResource _page) =>
            session.SendRequestAsync<dynamic>(
                              method: "PUT",
                            endpoint: $"/lol-perks/v1/pages/{_id}",
                               query: null,
                             headers: null,
                                body: _page,
                       serializeBody: true);
    }
}
