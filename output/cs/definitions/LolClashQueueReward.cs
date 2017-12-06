using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashQueueReward
    {
        [DataMember(Name = "isChampionPointsEnabled")]
        bool IsChampionPointsEnabled { get; set; }

        [DataMember(Name = "isIpEnabled")]
        bool IsIpEnabled { get; set; }

        [DataMember(Name = "isXpEnabled")]
        bool IsXpEnabled { get; set; }

        [DataMember(Name = "partySizeIpRewards")]
        int[] PartySizeIpRewards { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashQueueReward {\n");
            sb.Append("  IsChampionPointsEnabled: ").Append(IsChampionPointsEnabled).Append("\n");
            sb.Append("  IsIpEnabled: ").Append(IsIpEnabled).Append("\n");
            sb.Append("  IsXpEnabled: ").Append(IsXpEnabled).Append("\n");
            sb.Append("  PartySizeIpRewards: ").Append(PartySizeIpRewards).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}