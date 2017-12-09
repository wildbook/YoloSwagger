using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetDataStoreV1InstallSettingsByPath(LeagueClientSession session, string _path) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/data-store/v1/install-settings/{_path}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
