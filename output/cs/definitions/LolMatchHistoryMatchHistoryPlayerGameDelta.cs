using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchHistoryMatchHistoryPlayerGameDelta
    {
        [DataMember(Name = "leagueDelta")]
        LolMatchHistoryMatchHistoryPlayerLeagueDelta LeagueDelta { get; set; }

        [DataMember(Name = "platformDelta")]
        LolMatchHistoryMatchHistoryPlayerPlatformDelta PlatformDelta { get; set; }

        [DataMember(Name = "gamePlatformId")]
        string GamePlatformId { get; set; }

        [DataMember(Name = "gameId")]
        ulong GameId { get; set; }

        [DataMember(Name = "champMastery")]
        LolMatchHistoryMatchHistoryPlayerChampMasteryDelta ChampMastery { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryPlayerGameDelta {\n");
            sb.Append("  LeagueDelta: ").Append(LeagueDelta).Append("\n");
            sb.Append("  PlatformDelta: ").Append(PlatformDelta).Append("\n");
            sb.Append("  GamePlatformId: ").Append(GamePlatformId).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  ChampMastery: ").Append(ChampMastery).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}