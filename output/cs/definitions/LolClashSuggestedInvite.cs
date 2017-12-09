using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashSuggestedInvite
    {
        [DataMember(Name = "suggesterSummonerId")]
        public ulong SuggesterSummonerId { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashSuggestedInvite {\n");
            sb.Append("  SuggesterSummonerId: ").Append(SuggesterSummonerId).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}