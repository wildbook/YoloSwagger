using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PatcherNotification[]> GetPatcherV1Notifications(LeagueClientSession session) =>
            session.SendRequestAsync<PatcherNotification[]>(
                              method: "GET",
                            endpoint: $"/patcher/v1/notifications",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
