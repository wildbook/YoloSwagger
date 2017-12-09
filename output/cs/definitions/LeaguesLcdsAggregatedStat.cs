using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LeaguesLcdsAggregatedStat
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "statType")]
        public string StatType { get; set; }

        [DataMember(Name = "value")]
        public float Value { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaguesLcdsAggregatedStat {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  StatType: ").Append(StatType).Append("\n");
            sb.Append("  Value: ").Append(Value).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}