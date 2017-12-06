using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashInviteSubRequest
    {
        [DataMember(Name = "replacedSummonerId")]
        ulong ReplacedSummonerId { get; set; }

        [DataMember(Name = "substituteSummonerId")]
        ulong SubstituteSummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashInviteSubRequest {\n");
            sb.Append("  ReplacedSummonerId: ").Append(ReplacedSummonerId).Append("\n");
            sb.Append("  SubstituteSummonerId: ").Append(SubstituteSummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}