using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolStoreWallet> GetLolStoreV1Wallet(LeagueClientSession session) =>
            session.SendRequestAsync<LolStoreWallet>(
                              method: "GET",
                            endpoint: $"/lol-store/v1/wallet",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
