using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerClubMembership> PatchLolClubsV1ClubsInvitations(LeagueClientSession session, ClubInvite _invitation) =>
            session.SendRequestAsync<PlayerClubMembership>(
                              method: "PATCH",
                            endpoint: $"/lol-clubs/v1/clubs/invitations",
                               query: null,
                             headers: null,
                                body: _invitation,
                       serializeBody: true);
    }
}
