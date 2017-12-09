using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolCollectionsCollectionsTopChampionMasteries
    {
        [DataMember(Name = "masteries")]
        public LolCollectionsCollectionsChampionMastery[] Masteries { get; set; }

        [DataMember(Name = "score")]
        public ulong Score { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsCollectionsTopChampionMasteries {\n");
            sb.Append("  Masteries: ").Append(Masteries).Append("\n");
            sb.Append("  Score: ").Append(Score).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}