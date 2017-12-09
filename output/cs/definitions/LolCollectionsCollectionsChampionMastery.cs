using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolCollectionsCollectionsChampionMastery
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "championLevel")]
        public int ChampionLevel { get; set; }

        [DataMember(Name = "championPoints")]
        public int ChampionPoints { get; set; }

        [DataMember(Name = "championPointsSinceLastLevel")]
        public int ChampionPointsSinceLastLevel { get; set; }

        [DataMember(Name = "championPointsUntilNextLevel")]
        public int ChampionPointsUntilNextLevel { get; set; }

        [DataMember(Name = "chestGranted")]
        public bool ChestGranted { get; set; }

        [DataMember(Name = "highestGrade")]
        public string HighestGrade { get; set; }

        [DataMember(Name = "lastPlayTime")]
        public ulong LastPlayTime { get; set; }

        [DataMember(Name = "playerId")]
        public ulong PlayerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsCollectionsChampionMastery {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  ChampionLevel: ").Append(ChampionLevel).Append("\n");
            sb.Append("  ChampionPoints: ").Append(ChampionPoints).Append("\n");
            sb.Append("  ChampionPointsSinceLastLevel: ").Append(ChampionPointsSinceLastLevel).Append("\n");
            sb.Append("  ChampionPointsUntilNextLevel: ").Append(ChampionPointsUntilNextLevel).Append("\n");
            sb.Append("  ChestGranted: ").Append(ChestGranted).Append("\n");
            sb.Append("  HighestGrade: ").Append(HighestGrade).Append("\n");
            sb.Append("  LastPlayTime: ").Append(LastPlayTime).Append("\n");
            sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}