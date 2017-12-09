using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyPremadePartyDto> GetLolLobbyV2CommsMembers(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyPremadePartyDto>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v2/comms/members",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
