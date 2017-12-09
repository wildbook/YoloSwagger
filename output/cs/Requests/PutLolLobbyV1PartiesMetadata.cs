using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutLolLobbyV1PartiesMetadata(LeagueClientSession session, LolLobbyPartyMemberMetadataDto _metadata) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/lol-lobby/v1/parties/metadata",
                               query: null,
                             headers: null,
                                body: _metadata,
                       serializeBody: true);
    }
}
