using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<SanitizerSanitizeResponse> PostSanitizerV1Sanitize(LeagueClientSession session, SanitizerSanitizeRequest _request) =>
            session.SendRequestAsync<SanitizerSanitizeResponse>(
                              method: "POST",
                            endpoint: $"/sanitizer/v1/sanitize",
                               query: null,
                             headers: null,
                                body: _request,
                       serializeBody: true);
    }
}
