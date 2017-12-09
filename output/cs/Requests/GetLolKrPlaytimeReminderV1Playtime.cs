using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlaytimeReminder> GetLolKrPlaytimeReminderV1Playtime(LeagueClientSession session) =>
            session.SendRequestAsync<PlaytimeReminder>(
                              method: "GET",
                            endpoint: $"/lol-kr-playtime-reminder/v1/playtime",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
