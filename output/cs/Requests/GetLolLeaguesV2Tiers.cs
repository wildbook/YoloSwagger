using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLeaguesParticipantTiers[]> GetLolLeaguesV2Tiers(LeagueClientSession session, LolLeaguesLeagueQueueType[] _queueTypes, ulong[] _summonerIds) =>
            session.SendRequestAsync<LolLeaguesParticipantTiers[]>(
                              method: "GET",
                            endpoint: $"/lol-leagues/v2/tiers",
                               query: new Dictionary<string, string>{{"summonerIds", JsonConvert.SerializeObject(_summonerIds)}, {"queueTypes", JsonConvert.SerializeObject(_queueTypes)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
