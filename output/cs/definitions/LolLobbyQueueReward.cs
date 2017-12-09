using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyQueueReward
    {
        [DataMember(Name = "isChampionPointsEnabled")]
        public bool IsChampionPointsEnabled { get; set; }

        [DataMember(Name = "isIpEnabled")]
        public bool IsIpEnabled { get; set; }

        [DataMember(Name = "isXpEnabled")]
        public bool IsXpEnabled { get; set; }

        [DataMember(Name = "partySizeIpRewards")]
        public int[] PartySizeIpRewards { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyQueueReward {\n");
            sb.Append("  IsChampionPointsEnabled: ").Append(IsChampionPointsEnabled).Append("\n");
            sb.Append("  IsIpEnabled: ").Append(IsIpEnabled).Append("\n");
            sb.Append("  IsXpEnabled: ").Append(IsXpEnabled).Append("\n");
            sb.Append("  PartySizeIpRewards: ").Append(PartySizeIpRewards).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}