using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChatPlayerPreferences
    {
        [DataMember(Name = "data")]
        string Data { get; set; }

        [DataMember(Name = "hash")]
        string Hash { get; set; }

        [DataMember(Name = "modified")]
        ulong Modified { get; set; }

        [DataMember(Name = "type")]
        string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatPlayerPreferences {\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  Hash: ").Append(Hash).Append("\n");
            sb.Append("  Modified: ").Append(Modified).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}