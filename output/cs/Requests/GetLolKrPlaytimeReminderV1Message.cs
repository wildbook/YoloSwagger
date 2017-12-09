using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string> GetLolKrPlaytimeReminderV1Message(LeagueClientSession session) =>
            session.SendRequestAsync<string>(
                              method: "GET",
                            endpoint: $"/lol-kr-playtime-reminder/v1/message",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
