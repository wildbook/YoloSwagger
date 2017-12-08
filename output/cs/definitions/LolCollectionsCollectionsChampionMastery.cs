using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolCollectionsCollectionsChampionMastery
    {
        [DataMember(Name = "championLevel")]
        int ChampionLevel { get; set; }

        [DataMember(Name = "chestGranted")]
        bool ChestGranted { get; set; }

        [DataMember(Name = "championPoints")]
        int ChampionPoints { get; set; }

        [DataMember(Name = "championPointsSinceLastLevel")]
        int ChampionPointsSinceLastLevel { get; set; }

        [DataMember(Name = "highestGrade")]
        string HighestGrade { get; set; }

        [DataMember(Name = "playerId")]
        ulong PlayerId { get; set; }

        [DataMember(Name = "championPointsUntilNextLevel")]
        int ChampionPointsUntilNextLevel { get; set; }

        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "lastPlayTime")]
        ulong LastPlayTime { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsCollectionsChampionMastery {\n");
            sb.Append("  ChampionLevel: ").Append(ChampionLevel).Append("\n");
            sb.Append("  ChestGranted: ").Append(ChestGranted).Append("\n");
            sb.Append("  ChampionPoints: ").Append(ChampionPoints).Append("\n");
            sb.Append("  ChampionPointsSinceLastLevel: ").Append(ChampionPointsSinceLastLevel).Append("\n");
            sb.Append("  HighestGrade: ").Append(HighestGrade).Append("\n");
            sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
            sb.Append("  ChampionPointsUntilNextLevel: ").Append(ChampionPointsUntilNextLevel).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  LastPlayTime: ").Append(LastPlayTime).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}