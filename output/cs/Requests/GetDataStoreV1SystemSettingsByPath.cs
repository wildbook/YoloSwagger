using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetDataStoreV1SystemSettingsByPath(LeagueClientSession session, string _path) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/data-store/v1/system-settings/{_path}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
