using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLicenseAgreementLicenseAgreement[]> GetLolLicenseAgreementV1Agreements(LeagueClientSession session) =>
            session.SendRequestAsync<LolLicenseAgreementLicenseAgreement[]>(
                              method: "GET",
                            endpoint: $"/lol-license-agreement/v1/agreements",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
