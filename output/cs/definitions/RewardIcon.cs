using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RewardIcon
    {
        [DataMember(Name = "icon")]
        public int Icon { get; set; }

        [DataMember(Name = "memberOwnedCount")]
        public int MemberOwnedCount { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RewardIcon {\n");
            sb.Append("  Icon: ").Append(Icon).Append("\n");
            sb.Append("  MemberOwnedCount: ").Append(MemberOwnedCount).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}