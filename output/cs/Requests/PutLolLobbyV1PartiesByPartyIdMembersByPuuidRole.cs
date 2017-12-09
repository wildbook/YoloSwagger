using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutLolLobbyV1PartiesByPartyIdMembersByPuuidRole(LeagueClientSession session, string _partyId, string _puuid, string _role) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/lol-lobby/v1/parties/{_partyId}/members/{_puuid}/role",
                               query: null,
                             headers: null,
                                body: _role,
                       serializeBody: true);
    }
}
