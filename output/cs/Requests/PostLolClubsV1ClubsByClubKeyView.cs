using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolClubsV1ClubsByClubKeyView(LeagueClientSession session, string _clubKey) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-clubs/v1/clubs/{_clubKey}/view",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
