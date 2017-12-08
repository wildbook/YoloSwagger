using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashSuggestedInvite
    {
        [DataMember(Name = "suggesterSummonerId")]
        ulong SuggesterSummonerId { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

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