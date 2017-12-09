using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolChampSelectV1SessionActionsByIdComplete(LeagueClientSession session, long _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-champ-select/v1/session/actions/{_id}/complete",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
