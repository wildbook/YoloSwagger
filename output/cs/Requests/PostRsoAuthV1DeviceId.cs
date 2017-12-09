using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RsoAuthDeviceId> PostRsoAuthV1DeviceId(LeagueClientSession session) =>
            session.SendRequestAsync<RsoAuthDeviceId>(
                              method: "POST",
                            endpoint: $"/rso-auth/v1/device-id",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
