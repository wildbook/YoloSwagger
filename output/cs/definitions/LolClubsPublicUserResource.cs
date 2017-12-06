using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClubsPublicUserResource
    {
        [DataMember(Name = "availability")]
        string Availability { get; set; }

        [DataMember(Name = "icon")]
        int Icon { get; set; }

        [DataMember(Name = "id")]
        ulong Id { get; set; }

        [DataMember(Name = "lastSeenOnlineTimestamp")]
        string LastSeenOnlineTimestamp { get; set; }

        [DataMember(Name = "lol")]
        Dictionary<string, string> Lol { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClubsPublicUserResource {\n");
            sb.Append("  Availability: ").Append(Availability).Append("\n");
            sb.Append("  Icon: ").Append(Icon).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LastSeenOnlineTimestamp: ").Append(LastSeenOnlineTimestamp).Append("\n");
            sb.Append("  Lol: ").Append(Lol).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}