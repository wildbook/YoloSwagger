using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClubsPublicPlayerClub
    {
        [DataMember(Name = "key")]
        public string Key { get; set; }

        [DataMember(Name = "members")]
        public LolClubsPublicClubMemberLists Members { get; set; }

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