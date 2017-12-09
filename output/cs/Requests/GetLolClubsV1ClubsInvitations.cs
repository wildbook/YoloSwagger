using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<ClubInvite[]> GetLolClubsV1ClubsInvitations(LeagueClientSession session) =>
            session.SendRequestAsync<ClubInvite[]>(
                              method: "GET",
                            endpoint: $"/lol-clubs/v1/clubs/invitations",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
