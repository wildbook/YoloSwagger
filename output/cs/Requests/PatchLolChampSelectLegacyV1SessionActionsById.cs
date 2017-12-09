using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PatchLolChampSelectLegacyV1SessionActionsById(LeagueClientSession session, LolChampSelectLegacyChampSelectAction _data, ulong _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "PATCH",
                            endpoint: $"/lol-champ-select-legacy/v1/session/actions/{_id}",
                               query: null,
                             headers: null,
                                body: _data,
                       serializeBody: true);
    }
}
