using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<ClubMember[]> GetLolClubsV1ClubsByClubKeyInvitations(LeagueClientSession session, string _clubKey) =>
            session.SendRequestAsync<ClubMember[]>(
                              method: "GET",
                            endpoint: $"/lol-clubs/v1/clubs/{_clubKey}/invitations",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
