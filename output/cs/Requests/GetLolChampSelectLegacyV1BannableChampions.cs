using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampSelectLegacyChampSelectBannableChampions> GetLolChampSelectLegacyV1BannableChampions(LeagueClientSession session) =>
            session.SendRequestAsync<LolChampSelectLegacyChampSelectBannableChampions>(
                              method: "GET",
                            endpoint: $"/lol-champ-select-legacy/v1/bannable-champions",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
