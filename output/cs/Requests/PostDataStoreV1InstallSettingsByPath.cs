using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostDataStoreV1InstallSettingsByPath(LeagueClientSession session, dynamic _data, string _path) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/data-store/v1/install-settings/{_path}",
                               query: null,
                             headers: null,
                                body: _data,
                       serializeBody: true);
    }
}
