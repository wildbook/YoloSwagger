using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryPlayerGameDelta
    {
        [DataMember(Name = "champMastery")]
        public LolMatchHistoryMatchHistoryPlayerChampMasteryDelta ChampMastery { get; set; }

        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "gamePlatformId")]
        public string GamePlatformId { get; set; }

        [DataMember(Name = "leagueDelta")]
        public LolMatchHistoryMatchHistoryPlayerLeagueDelta LeagueDelta { get; set; }

        [DataMember(Name = "platformDelta")]
        public LolMatchHistoryMatchHistoryPlayerPlatformDelta PlatformDelta { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryPlayerGameDelta {\n");
            sb.Append("  ChampMastery: ").Append(ChampMastery).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  GamePlatformId: ").Append(GamePlatformId).Append("\n");
            sb.Append("  LeagueDelta: ").Append(LeagueDelta).Append("\n");
            sb.Append("  PlatformDelta: ").Append(PlatformDelta).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}