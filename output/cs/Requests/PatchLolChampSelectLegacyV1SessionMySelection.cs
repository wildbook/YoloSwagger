using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PatchLolChampSelectLegacyV1SessionMySelection(LeagueClientSession session, LolChampSelectLegacyChampSelectMySelection _selection) =>
            session.SendRequestAsync<dynamic>(
                              method: "PATCH",
                            endpoint: $"/lol-champ-select-legacy/v1/session/my-selection",
                               query: null,
                             headers: null,
                                body: _selection,
                       serializeBody: true);
    }
}
