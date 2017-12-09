using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLicenseAgreementV1AgreementsByIdDecline(LeagueClientSession session, string _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-license-agreement/v1/agreements/{_id}/decline",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
