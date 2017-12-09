using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClubsPublicClubMemberLists
    {
        [DataMember(Name = "activeMembers")]
        public LolClubsPublicClubPlayer[] ActiveMembers { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClubsPublicClubMemberLists {\n");
            sb.Append("  ActiveMembers: ").Append(ActiveMembers).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}