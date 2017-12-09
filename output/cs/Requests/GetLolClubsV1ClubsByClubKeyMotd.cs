using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string> GetLolClubsV1ClubsByClubKeyMotd(LeagueClientSession session, string _clubKey) =>
            session.SendRequestAsync<string>(
                              method: "GET",
                            endpoint: $"/lol-clubs/v1/clubs/{_clubKey}/motd",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
