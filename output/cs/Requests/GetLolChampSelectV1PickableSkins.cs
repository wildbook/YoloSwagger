using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampSelectChampSelectPickableSkins> GetLolChampSelectV1PickableSkins(LeagueClientSession session) =>
            session.SendRequestAsync<LolChampSelectChampSelectPickableSkins>(
                              method: "GET",
                            endpoint: $"/lol-champ-select/v1/pickable-skins",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
