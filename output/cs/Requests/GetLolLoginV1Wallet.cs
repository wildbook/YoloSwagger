using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLoginLoginSessionWallet> GetLolLoginV1Wallet(LeagueClientSession session) =>
            session.SendRequestAsync<LolLoginLoginSessionWallet>(
                              method: "GET",
                            endpoint: $"/lol-login/v1/wallet",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
