using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClubsPublicPlayerClub
    {
        [DataMember(Name = "key")]
        string Key { get; set; }

        [DataMember(Name = "members")]
        LolClubsPublicClubMemberLists Members { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClubsPublicPlayerClub {\n");
            sb.Append("  Key: ").Append(Key).Append("\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}