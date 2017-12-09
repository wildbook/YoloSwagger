using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> DeleteLolChatV1ErrorsById(LeagueClientSession session, ulong _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/lol-chat/v1/errors/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
