using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostPatcherV1Notifications(LeagueClientSession session, PatcherNotificationId _notificationId) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/patcher/v1/notifications",
                               query: new Dictionary<string, string>{{"notificationId", JsonConvert.SerializeObject(_notificationId)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
