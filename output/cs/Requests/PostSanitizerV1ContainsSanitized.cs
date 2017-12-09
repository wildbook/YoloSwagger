using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<SanitizerContainsSanitizedResponse> PostSanitizerV1ContainsSanitized(LeagueClientSession session, SanitizerContainsSanitizedRequest _request) =>
            session.SendRequestAsync<SanitizerContainsSanitizedResponse>(
                              method: "POST",
                            endpoint: $"/sanitizer/v1/containsSanitized",
                               query: null,
                             headers: null,
                                body: _request,
                       serializeBody: true);
    }
}
