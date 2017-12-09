using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolAccountVerificationDeviceResponse> GetLolAccountVerificationV1Device(LeagueClientSession session) =>
            session.SendRequestAsync<LolAccountVerificationDeviceResponse>(
                              method: "GET",
                            endpoint: $"/lol-account-verification/v1/device",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
