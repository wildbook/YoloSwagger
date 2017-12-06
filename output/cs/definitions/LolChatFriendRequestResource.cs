using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChatFriendRequestResource
    {
        [DataMember(Name = "direction")]
        LolChatFriendRequestDirection Direction { get; set; }

        [DataMember(Name = "id")]
        ulong Id { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "note")]
        string Note { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatFriendRequestResource {\n");
            sb.Append("  Direction: ").Append(Direction).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Note: ").Append(Note).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}