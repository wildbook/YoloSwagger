using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> DeleteRecofrienderV1RegistrationsByNetwork(LeagueClientSession session, string _network) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/recofriender/v1/registrations/{_network}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
