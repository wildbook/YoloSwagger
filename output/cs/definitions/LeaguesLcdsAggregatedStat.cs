using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LeaguesLcdsAggregatedStat
    {
        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "id")]
        ulong Id { get; set; }

        [DataMember(Name = "statType")]
        string StatType { get; set; }

        [DataMember(Name = "value")]
        float Value { get; set; }

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