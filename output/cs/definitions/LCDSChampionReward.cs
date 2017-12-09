using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LCDSChampionReward
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "skins")]
        public int[] Skins { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LCDSChampionReward {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  Skins: ").Append(Skins).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}