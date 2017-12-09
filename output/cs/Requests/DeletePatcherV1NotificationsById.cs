using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> DeletePatcherV1NotificationsById(LeagueClientSession session, string _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/patcher/v1/notifications/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
