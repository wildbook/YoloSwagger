using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatUserResource
    {
        [DataMember(Name = "availability")]
        public string Availability { get; set; }

        [DataMember(Name = "icon")]
        public int Icon { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "lastSeenOnlineTimestamp")]
        public string LastSeenOnlineTimestamp { get; set; }

        [DataMember(Name = "lol")]
        public Dictionary<string, string> Lol { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "statusMessage")]
        public string StatusMessage { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatUserResource {\n");
            sb.Append("  Availability: ").Append(Availability).Append("\n");
            sb.Append("  Icon: ").Append(Icon).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LastSeenOnlineTimestamp: ").Append(LastSeenOnlineTimestamp).Append("\n");
            sb.Append("  Lol: ").Append(Lol).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  StatusMessage: ").Append(StatusMessage).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}